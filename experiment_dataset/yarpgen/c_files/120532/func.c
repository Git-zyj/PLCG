/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120532
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */int) min(((unsigned char)231), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -6409761348736411597LL)))) < (min((var_7), (((/* implicit */unsigned long long int) (unsigned char)250)))))))));
                        var_17 = ((/* implicit */long long int) ((((/* implicit */int) max(((!(((/* implicit */_Bool) 11788567728017623586ULL)))), ((!(((/* implicit */_Bool) var_9))))))) / (((/* implicit */int) ((((/* implicit */int) arr_9 [(_Bool)1] [i_1] [(_Bool)1] [i_1])) == (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3])))))));
                        arr_12 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_3]);
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 3; i_4 < 18; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((int) ((unsigned long long int) (unsigned short)29666)));
                        arr_17 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_12);
                        arr_18 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2]))))) : (((((/* implicit */_Bool) (unsigned short)647)) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_4])) : (((/* implicit */int) (unsigned char)123))))) ? (arr_1 [i_4 + 2]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)133)) >= (((/* implicit */int) arr_7 [2ULL] [i_2] [i_0] [i_0]))))))));
                        var_20 = ((/* implicit */int) (-(8966624251378183419ULL)));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            arr_24 [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_22 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)647)))));
                            arr_25 [i_6] [i_1] [i_1] [4] = ((/* implicit */int) ((272801755U) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) (unsigned short)641)))))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4022165541U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-95))) : (var_6)))) ? (((/* implicit */int) (unsigned short)64891)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)115)))))));
                        }
                        var_23 = ((/* implicit */int) (+(arr_22 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] [i_5])));
                        arr_26 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) 14651433006726173456ULL);
                    }
                    var_24 = 7803334983287990056ULL;
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */signed char) min((((/* implicit */long long int) ((int) (unsigned char)160))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */long long int) var_10))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))) > (272801762U)))))))));
}
