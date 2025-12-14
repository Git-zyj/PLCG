/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151093
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (3685359516U)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)5)), (arr_2 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11088))) : (var_14)))) ? (((((((/* implicit */_Bool) (unsigned short)24381)) && (((/* implicit */_Bool) (unsigned short)31820)))) ? (3888075831U) : (max((var_8), (653720003U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_1]))))) != (((((/* implicit */_Bool) (short)1024)) ? (1755244375U) : (4294967293U))))))));
                arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) arr_3 [i_1]))))), ((+(((/* implicit */int) (signed char)(-127 - 1)))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) : (4294967293U)));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) (unsigned short)1317);
                                var_18 = (-(406891465U));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 ^= ((/* implicit */signed char) 4U);
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)42369)) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3U)))))) : (((((/* implicit */_Bool) 3729592750U)) ? (5U) : (var_0)))))) ? (((((unsigned int) var_11)) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)30720)) ? (((/* implicit */int) (unsigned short)16376)) : (((/* implicit */int) var_6))))))) : (max((var_13), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967286U)))))))));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((((/* implicit */_Bool) 167480046U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))))) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-8742)) || (((((/* implicit */_Bool) (signed char)-4)) && (((/* implicit */_Bool) (short)16368))))))))))));
}
