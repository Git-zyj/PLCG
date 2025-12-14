/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140961
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
    var_15 = ((/* implicit */long long int) ((((((/* implicit */int) max(((signed char)62), ((signed char)44)))) >= (((/* implicit */int) (signed char)127)))) ? (((((_Bool) (signed char)-62)) ? (((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) (signed char)34)) : (var_4))) : (((/* implicit */int) (signed char)-67)))) : (((var_4) - (((var_14) >> (((var_13) + (1806693127)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_5);
                    arr_7 [i_0] [2] [i_1] [i_1] = arr_5 [i_2] [i_2] [i_2];
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (-(2975159205U))))));
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_4 [i_0] [i_2])) * (((/* implicit */int) (unsigned char)241)))), (min((((/* implicit */int) (short)32767)), (-2147483640)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) max((var_3), (var_11)));
    /* LoopSeq 1 */
    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                arr_17 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) 268948099595494448ULL);
                var_18 = ((/* implicit */unsigned short) 9552488869754823674ULL);
            }
            arr_18 [(short)11] [i_3] [(short)11] = ((/* implicit */int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_2 [i_3] [i_4] [i_4])), (1150669704793161728ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-58)) - (((/* implicit */int) (signed char)67)))))))) ? (((arr_10 [i_3]) >> (((arr_10 [i_4]) - (1067685796998699341ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_4] [i_3])))));
            arr_19 [i_3] [11LL] [(unsigned short)11] = ((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [0LL]);
        }
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((arr_15 [9ULL] [i_3] [i_3] [i_3]) | (((/* implicit */long long int) ((/* implicit */int) ((-7768002887115081257LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5))))))))) % (((/* implicit */long long int) ((int) min((((/* implicit */int) var_2)), (1788447834))))))))));
    }
}
