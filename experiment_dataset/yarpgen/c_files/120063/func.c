/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120063
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
    var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) | (-8930556912257048237LL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)30720))))) : ((~(3280157156708681048ULL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) (short)3238))) == (var_0))), (((var_1) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 *= ((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) (short)-21542))) | (932493483931973115LL)))));
                            var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(unsigned char)4] [i_3]))) & (max((((/* implicit */unsigned long long int) (_Bool)1)), (3797079413235517149ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [(_Bool)1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)21533))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (short)-21546)))))) : (max((arr_0 [i_2]), (((/* implicit */long long int) (short)-21530))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), (arr_11 [i_1] [i_1] [i_1 - 1] [i_1]))))))) ? (((((/* implicit */_Bool) (short)26809)) ? (((/* implicit */int) (short)21544)) : (((/* implicit */int) ((((/* implicit */int) (short)21547)) != (((/* implicit */int) (unsigned char)172))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)192))))) ? ((-(((/* implicit */int) arr_3 [i_0] [i_0])))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) min((((((/* implicit */int) var_16)) + ((+(((/* implicit */int) (unsigned char)151)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)183))) < (-6964712842077429456LL))))))));
    var_24 = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))) : (var_18)))))));
}
