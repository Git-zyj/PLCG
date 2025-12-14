/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102714
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
    var_19 = ((/* implicit */unsigned short) (-((((~(((/* implicit */int) (unsigned short)23944)))) ^ (((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] [11] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_1 [i_0 - 1] [i_0]), (((/* implicit */long long int) (_Bool)1)))))))), (((((/* implicit */_Bool) (~(arr_3 [i_0])))) ? (arr_3 [6LL]) : (((/* implicit */long long int) min((1780456486), (((/* implicit */int) var_3)))))))));
                /* LoopSeq 2 */
                for (int i_2 = 3; i_2 < 14; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((~(489549101)))))) ? (((/* implicit */int) (unsigned short)23943)) : (((/* implicit */int) (unsigned short)2220))));
                        var_21 += min((437714126), (((/* implicit */int) arr_11 [3LL] [i_2] [i_1] [i_0 - 1] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_6 [i_1] [i_1] [i_4]) < (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            var_23 ^= 1245604432;
                            arr_19 [i_0] [i_1] [i_2] [i_4] = var_4;
                        }
                        arr_20 [(signed char)10] [(unsigned char)6] [0] [(short)0] &= (-(((/* implicit */int) ((_Bool) (unsigned char)241))));
                    }
                    for (int i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
                    {
                        arr_23 [(unsigned short)8] [i_1] [(unsigned short)8] = max((var_8), (((/* implicit */int) var_3)));
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_5))));
                        var_25 = (~(arr_12 [i_6] [i_2] [i_1] [i_0]));
                        arr_24 [i_1] = arr_16 [i_2 - 1] [i_2 - 2];
                    }
                    for (int i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
                    {
                        arr_29 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */int) arr_13 [i_1]);
                        arr_30 [i_1] [(unsigned short)7] [i_1] [i_1] = ((/* implicit */_Bool) (~(532676608)));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            var_27 = ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */unsigned short) ((_Bool) var_0))), ((unsigned short)10846)))), (1913817845749938469LL)));
                            var_28 = ((/* implicit */int) (_Bool)1);
                        }
                        for (int i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            var_29 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1245604432)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((-9223372036854775807LL - 1LL)))))))) : (31762602)));
                            var_30 = ((/* implicit */unsigned short) max((var_30), (var_4)));
                        }
                    }
                    arr_36 [i_1] = ((/* implicit */unsigned short) (-(max((((/* implicit */int) (!((_Bool)1)))), ((+(var_8)))))));
                    arr_37 [i_1] = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) var_16)))));
                }
                for (int i_10 = 3; i_10 < 14; i_10 += 2) /* same iter space */
                {
                    var_31 -= ((/* implicit */long long int) ((((/* implicit */int) (short)23125)) | (1780456486)));
                    arr_41 [i_0] [i_1] [i_10] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (short)28598)) ? (arr_21 [i_10 - 1] [(unsigned char)12] [i_10] [(unsigned short)1]) : (arr_21 [i_10 + 2] [i_10] [(short)15] [i_10]))));
                }
            }
        } 
    } 
    var_32 = ((/* implicit */int) min((var_32), ((~((((~(var_9))) % (((var_2) ? (((/* implicit */int) (unsigned short)61776)) : (((/* implicit */int) (short)-17009))))))))));
}
