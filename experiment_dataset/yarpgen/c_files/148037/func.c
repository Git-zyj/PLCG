/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148037
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), ((~(((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (var_7) : (((/* implicit */int) ((signed char) var_4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (var_2)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) 9223372036854775807LL);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (int i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_3)) ? (15) : (var_7))) : ((~(((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_2]) != (((/* implicit */int) var_12))))))))));
                        arr_11 [i_3] [i_2] [i_1] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_3))))))) ? (min((((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) (signed char)-54))))), ((+(((/* implicit */int) var_1)))))) : (((/* implicit */int) arr_3 [i_0] [i_1]))));
                        var_18 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_15)) : (arr_7 [i_0])))) && (((/* implicit */_Bool) var_2))))), (min((max((9223372036854775801LL), (((/* implicit */long long int) (short)63)))), (((/* implicit */long long int) var_7))))));
                        arr_12 [i_0] [i_0] [i_0] [i_2] [i_3] = ((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_11)))))), (((/* implicit */int) ((((/* implicit */int) ((short) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))) == (((/* implicit */int) min(((signed char)-17), (((/* implicit */signed char) arr_0 [i_3]))))))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (max((((((/* implicit */_Bool) -9223372036854775801LL)) ? (((/* implicit */unsigned long long int) 546106802)) : (4246109402108702862ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (4246109402108702862ULL)));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            for (int i_5 = 1; i_5 < 14; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_21 -= ((/* implicit */_Bool) max(((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((4487571331050916385ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) var_16))));
                                arr_23 [i_0] [i_0] [i_0] [i_6] [i_4] [i_4] = ((/* implicit */short) 1808577930078939961LL);
                                arr_24 [i_0] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (max((13959172742658635230ULL), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 32)) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16)))) : (((int) arr_3 [i_6] [i_5])))))));
                            }
                        } 
                    } 
                    arr_25 [i_4] = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_5 + 3] [i_5 + 3] [i_4] [i_0]))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_13)))))));
                    arr_26 [i_0] [(_Bool)1] [i_5 + 3] &= ((/* implicit */_Bool) ((unsigned long long int) var_12));
                    /* LoopNest 2 */
                    for (long long int i_8 = 1; i_8 < 15; i_8 += 3) 
                    {
                        for (int i_9 = 1; i_9 < 15; i_9 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_5] [i_5] [i_9])) | (arr_13 [i_0])))) ? ((~(((/* implicit */int) var_10)))) : ((+(var_14)))))) ? (max((min((((/* implicit */unsigned long long int) var_6)), (var_2))), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                                var_23 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [10ULL] [i_9 + 2])) ? (arr_13 [i_9 - 1]) : (arr_13 [i_9 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)0)))) : ((~(4487571331050916389ULL)))));
                            }
                        } 
                    } 
                    arr_32 [i_0 + 1] [i_0] [i_4] = ((/* implicit */signed char) (((-(arr_5 [i_5 - 1] [i_5 - 1]))) == (((arr_8 [i_0 + 2] [i_0] [i_4] [i_5 + 1]) ? (((/* implicit */long long int) min((((/* implicit */int) var_0)), (-33)))) : (min((9223372036854775801LL), (((/* implicit */long long int) var_7))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_10 = 2; i_10 < 15; i_10 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) ((min((13959172742658635232ULL), (9837461496422446480ULL))) ^ (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) var_6)))))));
        arr_36 [i_10] = ((/* implicit */int) (+(((((/* implicit */_Bool) (short)-9318)) ? (9223372036854775802LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
    }
    for (unsigned long long int i_11 = 2; i_11 < 15; i_11 += 3) /* same iter space */
    {
        var_25 |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (-13) : (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-3284)) : (((/* implicit */int) (signed char)-85))))) ? (((/* implicit */int) min(((_Bool)1), (var_0)))) : (max((((/* implicit */int) (signed char)0)), (var_14)))))));
        var_26 = ((/* implicit */short) max((((/* implicit */unsigned long long int) 8343597541906643126LL)), (1521646060032866304ULL)));
        arr_39 [i_11] [i_11 - 1] = ((/* implicit */short) (((+(((/* implicit */int) arr_8 [i_11] [i_11 - 2] [i_11 - 2] [i_11])))) | (((/* implicit */int) arr_33 [i_11 - 2]))));
    }
    /* LoopSeq 1 */
    for (signed char i_12 = 3; i_12 < 16; i_12 += 1) 
    {
        var_27 = ((/* implicit */int) min((var_27), ((-((+(((/* implicit */int) var_11))))))));
        arr_42 [i_12 - 1] = ((/* implicit */short) var_10);
    }
}
