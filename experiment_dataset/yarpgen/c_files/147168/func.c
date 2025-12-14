/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147168
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
    var_14 = ((/* implicit */int) var_13);
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)14169))), (((var_12) << (((var_7) - (4712816150918736532ULL)))))))) ? (var_5) : (((int) ((_Bool) 9223372036854775807LL)))));
    var_16 = ((/* implicit */unsigned char) var_7);
    var_17 += (_Bool)0;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_10 [i_0 + 1] [i_0 + 1] = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) var_5)) : (var_3)))) ? (((((/* implicit */_Bool) var_5)) ? (-5167350197918924303LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (var_0))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        arr_14 [(_Bool)1] [i_1] [i_1] [i_3] = 18446744073709551615ULL;
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (unsigned char)68))));
                        arr_15 [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (var_5)))) ? (((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */long long int) 1216904211U)) : (var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)109)))))));
                    }
                    for (unsigned char i_4 = 4; i_4 < 19; i_4 += 2) 
                    {
                        arr_19 [i_4 - 4] [i_0 + 1] = ((/* implicit */signed char) ((long long int) ((long long int) (_Bool)1)));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (max((1826269827136800350LL), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (1826269827136800350LL))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) & ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) var_5)) : (var_13)))));
                        var_20 = ((/* implicit */_Bool) ((1216904211U) << (((((((/* implicit */_Bool) var_9)) ? (2185621150452066486ULL) : (((/* implicit */unsigned long long int) 1216904211U)))) - (2185621150452066483ULL)))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 3; i_5 < 20; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)23736)) >> (((/* implicit */int) (_Bool)1))));
                        arr_24 [i_0] [i_5] [(unsigned short)15] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) var_3);
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 1) 
                    {
                        arr_29 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_10))) ? (((0ULL) | (9662579375749881525ULL))) : (((/* implicit */unsigned long long int) 1478406597U))));
                        var_22 += ((/* implicit */unsigned short) min((min((((/* implicit */long long int) 1216904211U)), (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)52123)) << (((/* implicit */int) (_Bool)1)))))));
                    }
                    var_23 = ((/* implicit */long long int) min((var_23), (((((/* implicit */_Bool) 2933267649U)) ? (((((/* implicit */_Bool) (((_Bool)1) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)160), (((/* implicit */unsigned short) (_Bool)1))))))))));
                }
            } 
        } 
        arr_30 [i_0] = ((/* implicit */_Bool) ((3409158731131686967LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4)))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)31435)) == (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)31435)))) > (((((/* implicit */_Bool) 1361699647U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (1879078693U))))))));
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)0))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) / (((((/* implicit */_Bool) var_0)) ? (var_10) : (5167350197918924302LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5167350197918924302LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34100))) : (-547696478191124356LL)))) : (2874992946718151871ULL)))));
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            arr_35 [i_0 + 1] [i_7] [i_0] = (((((_Bool)1) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
            var_26 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) 345875480U)) ? (((/* implicit */int) (short)-5194)) : (((/* implicit */int) (unsigned short)34100)))));
            var_27 = ((/* implicit */unsigned int) var_3);
            var_28 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32425)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)11677))))) ? (var_12) : (((/* implicit */unsigned long long int) ((int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) > (var_2))) && (((/* implicit */_Bool) min((var_11), ((unsigned short)31435))))))))));
        }
    }
    for (long long int i_8 = 3; i_8 < 14; i_8 += 2) 
    {
        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) (signed char)28))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_3)) : (var_12))) : (((((/* implicit */_Bool) (unsigned short)34100)) ? (((/* implicit */unsigned long long int) 0LL)) : (7291428208780070250ULL)))))) ? (((/* implicit */unsigned long long int) 1481341462)) : (min((((/* implicit */unsigned long long int) -1LL)), (var_7))))))));
        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) ^ (((/* implicit */int) (_Bool)1))))) ? (2269814212194729984LL) : (((/* implicit */long long int) ((/* implicit */int) ((8566932966042605943ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))))) ? (((/* implicit */int) (signed char)-62)) : (((((/* implicit */int) var_4)) * (((/* implicit */int) ((unsigned short) (unsigned char)0))))))))));
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)34101)) > (((/* implicit */int) (unsigned short)8767))));
    }
}
