/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165009
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) min((((((/* implicit */_Bool) 11865865042870783891ULL)) ? (max((((/* implicit */unsigned long long int) var_13)), (var_2))) : (((/* implicit */unsigned long long int) (-(var_5)))))), (((/* implicit */unsigned long long int) var_8)))))));
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) 845240817291509097ULL))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_19 ^= ((/* implicit */_Bool) (signed char)84);
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned short) 1033152622);
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) arr_12 [i_0 + 1] [i_0 - 2] [i_0 - 2] [(signed char)15] [i_1] [i_1])), ((+(-732130277)))))) > (((((/* implicit */_Bool) (short)-14315)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_0 - 2] [i_3])))));
                        }
                        for (signed char i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                        {
                            arr_19 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_3] [i_0 - 2] [i_5] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (_Bool)1))) | (((((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5])) | (arr_6 [i_0] [i_0 - 2] [i_0] [i_0 - 2])))))) ^ (arr_2 [i_0])));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_14 [12] [12] [i_0] [i_0] [12])) ^ (arr_4 [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_15 [i_1] [i_1] [i_1] [i_1] [(signed char)17] [i_1]), (((/* implicit */signed char) arr_10 [i_0] [i_0] [i_2] [i_0] [i_5])))))) : (var_9)))) ? (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_3]))))))) : (((unsigned long long int) var_11)))))));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((var_0) >> (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) (short)12839)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0 - 2] [(unsigned short)18] [i_2] [i_0 - 2] [i_5] [i_5]))) : (267386880U))) : (((/* implicit */unsigned int) -1859348462)))))))));
                        }
                        arr_20 [i_1] [i_1] = (-(arr_14 [i_2] [i_2] [i_2] [i_2] [2LL]));
                        var_24 += ((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_0] [(signed char)0] [i_0 - 1] [i_0 - 2] [i_2]))))) + (var_4)));
                    }
                } 
            } 
        } 
        arr_21 [i_0] &= ((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1] [i_0] [i_0])))));
    }
}
