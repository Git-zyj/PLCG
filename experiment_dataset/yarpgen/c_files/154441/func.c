/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154441
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
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
    var_13 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) var_1)), (6199739002722352228ULL))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 + 1]))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_15 = arr_2 [i_1] [6U] [i_0 + 1];
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                arr_6 [i_0] [i_0] [(_Bool)1] [i_1 + 1] = ((/* implicit */unsigned int) var_3);
                /* LoopSeq 2 */
                for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    var_16 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) min((arr_8 [i_0 + 1] [i_1] [i_2] [i_0 + 1]), (((/* implicit */short) var_11))))) ? (((/* implicit */int) ((unsigned char) 6199739002722352222ULL))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) == (0U)))))));
                    var_17 = ((/* implicit */long long int) ((unsigned int) max((arr_7 [i_1 + 1]), (arr_7 [i_1 + 1]))));
                }
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned char) (signed char)126))))), (((unsigned short) arr_0 [i_0] [i_4])))))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 2; i_5 < 20; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (_Bool)1)))))))))));
                        var_19 = ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_5 + 1]);
                        arr_16 [(_Bool)1] [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] = ((/* implicit */int) (signed char)126);
                    }
                }
            }
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                var_20 = ((/* implicit */unsigned short) max((((unsigned int) 12247005070987199407ULL)), (((/* implicit */unsigned int) arr_14 [i_0] [i_1] [i_6]))));
                var_21 += ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1 + 1])) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0])))))))), (((((/* implicit */int) (unsigned char)19)) * (((/* implicit */int) (_Bool)0))))));
            }
            var_22 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((arr_18 [i_1] [i_0]), (((/* implicit */short) (unsigned char)159))))) ? (((unsigned int) arr_5 [i_1] [i_1] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
            var_23 = ((/* implicit */unsigned char) 12247005070987199408ULL);
        }
        var_24 *= ((/* implicit */unsigned short) (~(((int) arr_4 [i_0 + 1]))));
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((((/* implicit */int) var_2)) * (((/* implicit */int) var_10))))))) ? ((-(4294967295U))) : (((((/* implicit */unsigned int) (~(var_8)))) / ((+(4294967295U)))))));
        var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) || (((/* implicit */_Bool) arr_9 [(unsigned char)16] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1])))))));
    }
    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) var_1))));
    var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) % (var_8)))) / (var_5)));
}
