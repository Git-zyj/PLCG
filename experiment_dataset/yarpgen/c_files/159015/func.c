/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159015
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 14489770410493433483ULL)) ? (16106127360ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)143)))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_21 = ((((/* implicit */int) (unsigned short)55189)) | ((((_Bool)1) ? (-1203100433) : (((/* implicit */int) ((short) var_7))))));
                /* LoopSeq 4 */
                for (signed char i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (((_Bool) ((unsigned long long int) var_11)))));
                    var_23 = ((/* implicit */unsigned int) arr_5 [i_2] [i_1]);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_24 = ((/* implicit */unsigned char) arr_0 [i_0]);
                    arr_10 [i_0 - 1] [i_0 - 1] [i_3] [i_3] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_9 [i_0 - 4] [i_0 - 4] [i_3]))))));
                }
                for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((arr_6 [i_0 - 3] [i_1 - 1]) < (arr_6 [i_0 + 2] [i_1 + 2]))) ? (arr_6 [i_0 - 1] [i_1 - 1]) : (min((4124356473463525903LL), (arr_6 [i_0 + 3] [i_1 + 1])))));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (15055090867069306363ULL) : (min(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_4] [i_1] [i_0]))) : (3391653206640245253ULL))), (((/* implicit */unsigned long long int) 0)))))))));
                    }
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) -1295777071))))))));
                        var_28 = ((min((var_4), (((/* implicit */unsigned long long int) (~(var_15)))))) - (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_17 [i_0] [i_1] [i_4] [i_6])))), ((((_Bool)0) ? (((/* implicit */int) arr_11 [i_6] [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0 - 2] [(_Bool)1]))))))));
                    }
                    var_29 = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)0)), ((~(((((/* implicit */_Bool) -1295777067)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                }
                for (short i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 21; i_9 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_8]))))) % (min((7460385908715944230ULL), (((/* implicit */unsigned long long int) var_19)))))) : (((/* implicit */unsigned long long int) min((((int) (signed char)92)), (((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_1 + 2])))))));
                                arr_26 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (~(3068911650U))))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) (!((_Bool)1))))));
                                var_31 ^= ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_8] [i_9])) ? (-1295777067) : (1295777067))), (((((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)175)))) / (((/* implicit */int) arr_17 [i_1] [i_7] [i_0] [i_9 + 1]))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_17) - (((/* implicit */long long int) ((((/* implicit */_Bool) 11063475119424764290ULL)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [19] [i_0])) : (((/* implicit */int) arr_0 [(_Bool)1])))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) == (549755813887LL))))))) : (min((((/* implicit */long long int) ((_Bool) (short)21719))), (var_17))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        var_33 = (-(((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_10] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) 13878709330804273188ULL)) ? (-549755813881LL) : (((/* implicit */long long int) ((/* implicit */int) (short)4885))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-31904)) > (((/* implicit */int) (_Bool)1)))))))));
                        var_34 = -1295777067;
                        var_35 = ((/* implicit */unsigned char) min((15055090867069306363ULL), (((/* implicit */unsigned long long int) 5271917979543826942LL))));
                    }
                }
                var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((/* implicit */_Bool) min((min((var_4), (((/* implicit */unsigned long long int) arr_17 [i_1] [i_1] [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)14629)) ? (-8309946444876768761LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1] [i_1] [i_0 - 1] [i_0]))))))))) ? ((((((~(((/* implicit */int) var_0)))) + (2147483647))) << (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_18)))) - (75))))) : (((/* implicit */int) (short)-29452)))))));
                var_37 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) ((short) arr_8 [i_0 - 1] [i_1] [i_1] [i_0]))), (((arr_19 [(short)15] [(_Bool)1] [(_Bool)1] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118))))))), (((/* implicit */unsigned int) ((short) arr_7 [i_1] [i_1 - 1] [i_0 - 4] [i_0 - 3])))));
            }
        } 
    } 
}
