/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188354
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (+(((long long int) ((((/* implicit */int) var_12)) & (((/* implicit */int) (signed char)107))))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) min((var_17), (((((((/* implicit */_Bool) var_13)) || (arr_2 [i_2] [i_1] [i_2]))) ? (((/* implicit */int) ((((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)255)), (16215051337128696862ULL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_2])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (18282260958807514419ULL))) / (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_6 [i_0] [i_0] [i_2])))))) ? (((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3 + 2] [i_3 + 1] [i_3 + 3] [i_3 - 2] [i_3 + 2] [i_3 - 3])) ? (((((/* implicit */_Bool) var_9)) ? (arr_0 [i_1] [i_2]) : (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)250)) * (((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) (unsigned short)54947)))) : (((/* implicit */int) (short)9790)))))));
                                arr_13 [(signed char)2] [i_0] [i_2] [i_0] [(unsigned char)10] = ((/* implicit */unsigned long long int) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (6558737764720374520ULL))), (((/* implicit */unsigned long long int) min((arr_11 [i_0] [i_2] [i_2] [i_3 - 1] [i_1] [i_3 - 2] [(unsigned char)16]), (var_12)))))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_3 + 1] [i_3] [i_0] [i_3 + 2] [i_3 + 3])) & ((+(((/* implicit */int) (short)32739)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (9007199254740991ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)55))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32763)))));
        var_20 = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) ((arr_7 [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))) == (((((/* implicit */int) arr_1 [i_0])) | ((+(((/* implicit */int) (unsigned short)8559))))))));
        var_21 = ((/* implicit */int) ((((/* implicit */int) ((_Bool) (((_Bool)1) ? (63ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56977))))))) == (min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [4U] [i_0]))) != (12854250770263785379ULL)))), (((var_0) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))))));
    }
    var_22 = ((/* implicit */unsigned long long int) (unsigned char)192);
    var_23 = ((/* implicit */unsigned char) ((var_0) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12))));
    var_24 = ((/* implicit */int) max((var_24), ((+(((/* implicit */int) ((((/* implicit */int) (unsigned char)90)) <= (((/* implicit */int) (!(((/* implicit */_Bool) (short)-2702))))))))))));
}
