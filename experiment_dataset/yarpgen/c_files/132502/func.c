/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132502
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (int i_3 = 4; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_1 - 1] [i_0] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_8 [i_1] [i_1] [i_1 - 1]))) ? (((unsigned int) arr_9 [i_1 - 1] [i_0 + 1] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_2 [i_3]), (((/* implicit */signed char) var_3))))) || (((/* implicit */_Bool) (-(1705703329))))))))));
                        arr_11 [i_0] [i_2] [11ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_3 + 2]))))) ? ((+(((/* implicit */int) arr_3 [i_0] [i_3 + 3])))) : (((((/* implicit */int) arr_3 [i_0] [i_3 + 3])) + (((/* implicit */int) arr_3 [i_0] [i_3 + 3]))))));
                        arr_12 [i_0] [(unsigned short)11] [i_0] [i_0] [(signed char)13] [(unsigned char)7] = max(((~((~(var_8))))), (((/* implicit */unsigned long long int) var_7)));
                        var_12 = ((/* implicit */short) (~(((/* implicit */int) arr_9 [i_1 - 1] [(unsigned char)12] [i_0]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            arr_15 [i_0] [i_4] = ((/* implicit */unsigned short) ((signed char) min((var_0), (((/* implicit */signed char) var_3)))));
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_0 [i_0]))))) > (min(((+(arr_14 [i_0] [i_4]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0])))))))));
            var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (short)0)))), (((/* implicit */int) arr_13 [i_0] [i_0]))))) & (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (arr_5 [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : ((-(arr_4 [i_0] [i_4])))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                var_14 = ((/* implicit */int) (!(((min((((/* implicit */unsigned int) arr_7 [i_0] [i_5])), (var_10))) < (((/* implicit */unsigned int) -1791556292))))));
                /* LoopSeq 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_15 = ((((/* implicit */_Bool) (~((-(((/* implicit */int) (short)-1))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_0 - 1] [i_0 + 2]))))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (min((var_10), (((/* implicit */unsigned int) arr_0 [i_0])))))));
                    arr_24 [i_0 + 4] [i_0] = ((/* implicit */unsigned int) var_3);
                }
                for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_27 [i_0 + 3] [i_5] [i_6] [i_8])))))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (14156224522255884645ULL)));
                }
            }
            var_18 = ((/* implicit */short) var_10);
        }
        for (unsigned char i_9 = 0; i_9 < 15; i_9 += 1) 
        {
            var_19 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_27 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 4])) < (arr_29 [i_0 + 4] [i_0 + 2]))))));
            arr_31 [i_0] = ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) arr_22 [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0 + 3])), (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (arr_5 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
        }
        var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0]))));
    }
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_6))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-79)) ^ (((/* implicit */int) var_0)))))))))));
    var_22 = ((/* implicit */_Bool) min((var_22), (((((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */unsigned long long int) var_6)), (763224848721224283ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (var_7)))))) <= (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))))) & (((var_11) - (var_6))))))))));
    var_23 ^= ((/* implicit */unsigned char) var_11);
    var_24 = (((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169))) : (var_8))))) <= (((/* implicit */unsigned long long int) ((((_Bool) var_1)) ? (((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((var_11) | (var_6)))))));
}
