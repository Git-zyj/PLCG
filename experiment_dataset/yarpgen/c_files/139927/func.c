/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139927
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) arr_0 [(short)5] [i_1]);
                var_15 = ((/* implicit */unsigned char) max((max((3546287971U), (((/* implicit */unsigned int) ((short) 8954353844528884625ULL))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [(unsigned char)0] [i_0])) % (((/* implicit */int) (short)(-32767 - 1)))))) < (arr_0 [i_1 - 1] [(short)4]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_2] [i_2]));
        arr_10 [i_2] = ((/* implicit */int) max((((/* implicit */unsigned int) max((max((((/* implicit */unsigned short) arr_2 [i_2] [i_2])), ((unsigned short)2540))), ((unsigned short)9425)))), (max((max((((/* implicit */unsigned int) arr_3 [8ULL])), (4294967295U))), (((/* implicit */unsigned int) arr_3 [i_2]))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) (short)-1024))));
        arr_11 [(unsigned char)8] = ((/* implicit */unsigned char) min(((unsigned short)9425), (((/* implicit */unsigned short) ((short) (short)32165)))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 6; i_3 += 4) 
        {
            for (int i_4 = 3; i_4 < 6; i_4 += 3) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned int) max((((unsigned long long int) (signed char)127)), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -9116446602130218076LL)))) * (var_2)))));
                    var_19 = ((/* implicit */unsigned short) 17814502638798416249ULL);
                    var_20 ^= ((/* implicit */unsigned char) (short)7108);
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 4; i_5 < 9; i_5 += 1) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) 1213170331968211683ULL))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_7 = 1; i_7 < 8; i_7 += 2) 
            {
                arr_26 [i_7] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((short) (_Bool)1));
                var_22 = ((/* implicit */unsigned char) 294393953);
                var_23 = ((/* implicit */int) 6298350845386117551ULL);
                var_24 = ((/* implicit */short) ((unsigned short) (signed char)127));
                var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) (short)32754))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)52472)) || (((/* implicit */_Bool) (signed char)46)))))));
            }
            for (unsigned char i_8 = 1; i_8 < 8; i_8 += 4) 
            {
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned short)2540))));
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((12148393228323434070ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (arr_0 [i_5 - 1] [i_8 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)14125))))));
                var_28 = ((/* implicit */unsigned char) 748679325U);
            }
            var_29 = ((/* implicit */_Bool) arr_29 [i_5]);
        }
    }
    var_30 = ((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) max((var_10), (((/* implicit */short) var_7)))))) % (var_9))), (((/* implicit */long long int) var_0))));
}
