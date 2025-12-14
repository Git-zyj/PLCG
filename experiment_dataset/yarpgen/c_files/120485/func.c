/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120485
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
    var_15 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)54))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) != (var_2)))) : (((((/* implicit */int) var_3)) * (((/* implicit */int) (signed char)54))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    var_16 *= (_Bool)1;
                    var_17 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) arr_2 [i_2] [i_1])) ^ (((/* implicit */int) (signed char)51)))) : (((((/* implicit */_Bool) 2752043176807423276LL)) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) (unsigned char)176))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_18 = (~(((((/* implicit */int) (signed char)80)) - (((/* implicit */int) var_3)))));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) max(((-(min((var_9), (((/* implicit */long long int) (unsigned char)72)))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [1LL])) ? (((/* implicit */int) var_13)) : (-134217728))) - (((((/* implicit */_Bool) (short)31132)) ? (((/* implicit */int) (signed char)80)) : (-60369630)))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 17; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) min((((((var_12) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)206))))) * (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)43)) << (((3800876989555641137LL) - (3800876989555641118LL)))))) ? (((/* implicit */int) (unsigned short)43528)) : (((/* implicit */int) (unsigned char)51))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (11924851147511549890ULL)))) ? (((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25036))) : (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0] [i_5] [i_5] [i_6] [i_5])) ? (((((((/* implicit */int) var_14)) + (2147483647))) >> (((((/* implicit */int) var_13)) + (29189))))) : (max((1412757095), (((/* implicit */int) (signed char)36)))))))));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_5 - 3] [i_5 - 2] [i_5 - 3] [i_5 + 2] [i_5 + 1])) : (arr_0 [i_2 - 3])))) ? (arr_0 [i_2 + 4]) : (((/* implicit */int) arr_11 [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5 - 1] [i_5 + 2])))))));
                                arr_18 [i_5] [i_5] [i_2] [i_5] [i_5] = 1047570693U;
                                var_23 = ((/* implicit */short) (+(1706425879)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
