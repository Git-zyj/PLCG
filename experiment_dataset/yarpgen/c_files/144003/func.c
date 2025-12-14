/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144003
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
    var_17 = ((/* implicit */int) (_Bool)1);
    var_18 |= ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) max((var_10), (var_10)))), ((+(var_12)))))));
    var_19 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) * (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)26647)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 4] [i_0])) ? (arr_3 [i_0] [i_0 + 3] [i_0]) : (arr_3 [i_0] [i_0 + 3] [i_0])))) != (min((((/* implicit */unsigned long long int) arr_2 [i_0 - 3])), (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_21 += ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])) == (((/* implicit */int) ((max((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0])), (arr_3 [i_3] [i_2] [i_0]))) == (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_4)))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)17526))) / (8589934464LL))))))) | (((((max((((/* implicit */int) arr_6 [i_2] [i_1])), (arr_1 [i_0]))) + (2147483647))) >> (((((/* implicit */_Bool) -888466654)) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [i_3])))))));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_6 [i_2] [i_1]))));
                            var_24 = ((/* implicit */long long int) arr_0 [i_1 - 3]);
                            var_25 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_4 [i_1 + 1])))) * ((+(((/* implicit */int) arr_8 [i_4 - 1] [i_3] [i_1 - 2] [i_0 + 2]))))));
                        }
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5] [i_2] [i_0])) ? (((/* implicit */int) (((!(arr_11 [i_0] [i_1] [i_2] [i_2] [i_5]))) || (((/* implicit */_Bool) ((unsigned short) var_9)))))) : (((((/* implicit */int) max((var_14), (((/* implicit */unsigned char) arr_4 [i_2]))))) + (((/* implicit */int) (_Bool)1))))));
                        var_27 &= ((/* implicit */unsigned short) min((((/* implicit */int) ((_Bool) arr_2 [i_0 - 4]))), ((~(((/* implicit */int) arr_2 [i_0 - 1]))))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1 - 3]))) ? (min((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2]))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)48880)) : (((/* implicit */int) var_3))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)28504)) : (-1)))))))));
                        arr_16 [i_5] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned int) (~(-888466654)))) : (((1015634097U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), ((~(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (arr_3 [i_5] [i_1] [i_0]) : (((/* implicit */long long int) arr_0 [i_1]))))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_9 [i_6] [i_2] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_6]))))) ? (((/* implicit */int) (!(arr_8 [i_0] [i_1] [i_2] [i_6])))) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1 - 3]))))) ? (((/* implicit */int) (((((_Bool)1) ? (arr_0 [i_0]) : (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) (short)28516))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)57208))))));
                        arr_20 [i_6] [i_6] [i_6] [i_1] [i_0] = ((/* implicit */signed char) ((((unsigned long long int) (-(((/* implicit */int) (short)28504))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_6])))));
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) max((((arr_9 [i_0 - 4] [i_0] [i_1 + 1] [i_6]) | (arr_9 [i_0 - 3] [i_1] [i_1 - 2] [i_1]))), (((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_1] [i_1 + 1] [i_2])) ? (arr_9 [i_0 - 2] [i_1] [i_1 - 3] [i_2]) : (((/* implicit */unsigned long long int) -1871554298)))))))));
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 4] [i_0 - 1])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 3] [i_0 - 1])))))) ? ((~(((/* implicit */int) arr_6 [i_0 - 3] [i_0 + 3])))) : (((/* implicit */int) arr_6 [i_0 - 3] [i_0 + 2]))));
                    }
                    var_32 += (!(((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2] [i_0 + 2])) + (((/* implicit */int) ((((/* implicit */int) (signed char)22)) <= (((/* implicit */int) (unsigned short)65535)))))))));
                }
            } 
        } 
        arr_21 [i_0] = ((/* implicit */short) arr_4 [i_0 + 3]);
        arr_22 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) / (((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) arr_18 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((int) var_2))) : (arr_3 [i_0] [i_0] [i_0])))));
    }
    for (short i_7 = 1; i_7 < 14; i_7 += 1) 
    {
        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_25 [i_7 - 1])))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            arr_29 [i_7] [i_8] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)114)) ? (arr_23 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_7])))))) ? (((/* implicit */int) (_Bool)1)) : (arr_13 [i_7 - 1] [i_7])))));
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)114)) * (((/* implicit */int) (unsigned char)33))));
            arr_30 [i_7] [i_8] [i_8] = ((/* implicit */_Bool) arr_24 [i_8]);
            var_35 = ((/* implicit */unsigned short) (+(((max((arr_12 [i_7] [i_8]), (arr_12 [i_7] [i_7]))) ? (((((/* implicit */int) var_13)) >> (((((/* implicit */int) arr_24 [i_7])) - (6315))))) : (((/* implicit */int) arr_12 [i_7] [i_8]))))));
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            var_36 = ((/* implicit */unsigned short) ((((888466653) + (((/* implicit */int) (signed char)108)))) >> (((((((/* implicit */_Bool) arr_28 [i_7] [i_7 - 1])) ? (arr_28 [i_7] [i_7 + 1]) : (1221263971282057349ULL))) - (2110084010101809095ULL)))));
            arr_33 [i_7] = (i_7 % 2 == 0) ? (((((((((/* implicit */int) (_Bool)0)) ^ ((~(((/* implicit */int) arr_2 [i_7])))))) + (2147483647))) >> (((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_25 [i_7])) | (arr_32 [i_7] [i_7] [i_9])))) ? (((/* implicit */int) ((unsigned short) arr_19 [i_9] [i_7] [i_9] [i_7] [i_7]))) : (((/* implicit */int) (short)22001)))) - (42603))))) : (((((((((/* implicit */int) (_Bool)0)) ^ ((~(((/* implicit */int) arr_2 [i_7])))))) + (2147483647))) >> (((((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_25 [i_7])) | (arr_32 [i_7] [i_7] [i_9])))) ? (((/* implicit */int) ((unsigned short) arr_19 [i_9] [i_7] [i_9] [i_7] [i_7]))) : (((/* implicit */int) (short)22001)))) - (42603))) - (12753)))));
            arr_34 [i_7] [i_7] [i_7] = (((-(var_11))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_7] [i_7]))));
        }
        var_37 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)89)) >= (((/* implicit */int) (((-(((/* implicit */int) (_Bool)0)))) > (((/* implicit */int) var_14)))))));
    }
    var_38 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 888466672)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10))))) % (var_5))), (((((/* implicit */_Bool) var_10)) ? (17225480102427494260ULL) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_7)) : (var_4)))))));
}
