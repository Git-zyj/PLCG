/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171415
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
    var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((min((3762152634U), (3762152612U))), (((/* implicit */unsigned int) max((1280620921), (((/* implicit */int) (unsigned char)0)))))))), (min((min((((/* implicit */unsigned long long int) 532814661U)), (17952997396943753159ULL))), (((/* implicit */unsigned long long int) min((532814681U), (((/* implicit */unsigned int) (short)32759)))))))));
    var_15 = ((/* implicit */short) max((1794661507U), (737659814U)));
    var_16 |= ((/* implicit */signed char) max((min((((/* implicit */unsigned int) max((-2147483637), (((/* implicit */int) (signed char)-103))))), (532814661U))), (((/* implicit */unsigned int) min((min((((/* implicit */int) (unsigned short)23037)), (2147483636))), (((((/* implicit */int) (unsigned short)23015)) + (-581060549))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)(-32767 - 1))), (max((((/* implicit */unsigned short) min(((unsigned char)97), ((unsigned char)97)))), ((unsigned short)15601)))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 4; i_2 < 21; i_2 += 3) 
                {
                    arr_10 [i_1] [i_1] [i_1] [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)218))) != (532814661U)))), ((signed char)-70)))) / (((max((((/* implicit */int) (unsigned char)71)), (-374347864))) + (max((((/* implicit */int) (unsigned char)43)), (-1715606972)))))));
                    arr_11 [i_0] [(short)14] [i_0] = max((9314757732774532922ULL), (((/* implicit */unsigned long long int) (unsigned char)192)));
                }
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) -2147483637)) % (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 9314757732774532922ULL)) && (((/* implicit */_Bool) (unsigned char)30))))), (min((3762152635U), (4294967294U)))))));
            }
        } 
    } 
    var_18 |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((min((532814634U), (((/* implicit */unsigned int) (unsigned char)185)))), (1026592323U)))), (((min((((/* implicit */unsigned long long int) (signed char)-30)), (4026531840ULL))) & (((/* implicit */unsigned long long int) -647518859))))));
}
