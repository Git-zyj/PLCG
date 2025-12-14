/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148705
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
    var_16 = ((/* implicit */_Bool) -7840549987021368121LL);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_17 += ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_2] [i_3]))) + (var_9))) & (((/* implicit */long long int) (~(arr_8 [i_0] [i_1] [i_1] [i_0] [i_4]))))));
                                arr_14 [i_0] [(unsigned short)9] [i_3] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1]);
                            }
                        } 
                    } 
                    arr_15 [i_1] [(_Bool)1] [i_1] [i_2] = ((/* implicit */_Bool) (unsigned short)22034);
                }
                for (long long int i_5 = 1; i_5 < 14; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        arr_22 [i_1] [i_1] [i_5 + 2] [i_5 + 2] [9ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) (signed char)124))));
                        var_18 = ((/* implicit */long long int) (_Bool)0);
                        arr_23 [i_1] = ((/* implicit */int) ((((((((/* implicit */int) ((signed char) arr_16 [i_1] [i_6]))) + (2147483647))) << (((((arr_2 [i_5] [i_6]) + (1540409407))) - (18))))) == (((/* implicit */int) ((max((((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_1] [i_5 + 2] [i_6])), (arr_4 [i_1]))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)15566)) != (((/* implicit */int) arr_0 [i_0])))))))))));
                    }
                    arr_24 [(_Bool)1] [i_1] [i_5] = ((/* implicit */_Bool) (~(((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) & (arr_11 [i_1]))))));
                    var_19 += ((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_21 [i_5] [(signed char)12] [i_0] [i_0] [i_1] [i_0])))) & (max((-4294280316431782229LL), (((/* implicit */long long int) arr_6 [i_0] [i_0] [8] [i_5]))))))));
                    arr_25 [i_1] [i_1] [i_5] = ((/* implicit */short) min((((((unsigned int) (_Bool)0)) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)30))))), (var_8)));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        arr_28 [i_7] [i_0] [i_0] [i_0] |= ((/* implicit */long long int) arr_20 [i_5] [i_0]);
                        arr_29 [i_1] [i_1] [(signed char)10] [i_1] = ((min((-1LL), (((/* implicit */long long int) arr_26 [i_7])))) + (((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_5])) - (((/* implicit */int) arr_26 [i_1]))))));
                        arr_30 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_2 [i_7] [i_5 - 1])) ^ (arr_6 [i_0] [i_1] [(short)5] [i_0])));
                        arr_31 [i_0] [(unsigned char)8] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) arr_4 [i_1]);
                    }
                }
                arr_32 [i_1] [i_1] [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (1024204184U) : (((/* implicit */unsigned int) 946276840)))), (((/* implicit */unsigned int) (_Bool)1))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_0);
}
