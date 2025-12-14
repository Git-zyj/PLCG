/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102876
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_10 = ((((((-4800872993430406523LL) + (9223372036854775807LL))) >> (((4800872993430406517LL) - (4800872993430406509LL))))) | (((/* implicit */long long int) ((/* implicit */int) ((-4800872993430406523LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        var_11 = ((/* implicit */_Bool) ((((((var_4) + (((/* implicit */int) arr_0 [i_0] [i_0])))) + (2147483647))) >> (((max((-4800872993430406518LL), (((/* implicit */long long int) var_0)))) - (19151LL)))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_12 = ((/* implicit */long long int) var_2);
            var_13 *= ((/* implicit */unsigned short) max(((+(((-670008465) - (((/* implicit */int) var_6)))))), (((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) <= (4800872993430406522LL))))))));
            var_14 = ((/* implicit */signed char) (unsigned short)36366);
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */short) var_9);
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((5314741440838400942ULL) >> (((/* implicit */int) var_2)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_4])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((13132002632871150674ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14670)))))));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_9) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [11] [11])))))) << (((var_3) + (2116117257)))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14670))) / (13132002632871150673ULL)))));
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_5 [i_2] [i_2]))));
                            var_19 = ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) ((var_7) >= (((/* implicit */long long int) var_4)))))))) ? ((+(((/* implicit */int) ((13132002632871150673ULL) > (((/* implicit */unsigned long long int) arr_12 [i_0]))))))) : (((/* implicit */int) min((arr_10 [i_0] [i_0] [(unsigned short)4] [i_2] [i_3] [i_2]), ((short)22939)))));
                        }
                    } 
                } 
            } 
        }
    }
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_5])))))) * (((((/* implicit */_Bool) 13132002632871150661ULL)) ? (arr_12 [i_5]) : (arr_12 [i_6])))));
                var_21 = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned char)211)))) != (((/* implicit */int) ((((/* implicit */int) arr_3 [i_6] [i_6] [i_5])) <= (((/* implicit */int) arr_3 [i_5] [i_6] [i_6])))))));
            }
        } 
    } 
}
