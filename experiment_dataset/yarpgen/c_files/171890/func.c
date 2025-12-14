/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171890
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)-26705)), ((unsigned short)28216)))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) 33554176U)) >= (var_9))))));
        var_12 ^= ((/* implicit */_Bool) min((min((1647422098U), (((/* implicit */unsigned int) (unsigned char)229)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)5)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] &= ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (unsigned char)47)))), ((-(((/* implicit */int) var_4))))));
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (short)26713))));
                    arr_10 [i_1] = ((/* implicit */unsigned long long int) var_0);
                    var_14 += (signed char)-54;
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */long long int) ((((((((/* implicit */int) (signed char)-54)) + (2147483647))) << (((((/* implicit */int) (short)189)) - (189))))) >= ((~(((/* implicit */int) (unsigned short)28216))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) (_Bool)1)), (4250425844436595528ULL))))) >> (((/* implicit */int) (_Bool)0))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
    {
        arr_15 [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)26162))));
        arr_16 [i_3] = ((/* implicit */unsigned int) (unsigned short)37582);
        /* LoopSeq 1 */
        for (long long int i_4 = 1; i_4 < 9; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                arr_22 [i_3] [i_3] [(signed char)6] = ((((/* implicit */unsigned long long int) (~(-856299871140984973LL)))) + (var_11));
                var_16 *= ((/* implicit */unsigned int) var_10);
            }
            var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 1154435393U)) ? (-856299871140984973LL) : (((/* implicit */long long int) -292557700))));
        }
        arr_23 [i_3] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * ((-9223372036854775807LL - 1LL))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)8654)) ? (-158391309) : (((/* implicit */int) (_Bool)1)))) <= (((((((/* implicit */int) (short)-26681)) + (2147483647))) << (((((-158391309) + (158391334))) - (25)))))))))))));
        var_19 += ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) ((-4034611318926425071LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)310)))))), (((((/* implicit */int) (unsigned short)28189)) << (((((/* implicit */int) (short)13052)) - (13050))))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (short i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_10))));
                arr_31 [i_8] = ((/* implicit */_Bool) min(((~(35184372088831LL))), (((((((/* implicit */_Bool) (unsigned short)37312)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (296573172257818695LL))) - (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                arr_32 [i_8] = ((/* implicit */long long int) (-(max((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) (unsigned short)28216)) >> (((((/* implicit */int) (short)-13053)) + (13058)))))))));
            }
        } 
    } 
}
