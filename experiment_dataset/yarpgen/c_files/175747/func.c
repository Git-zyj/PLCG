/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175747
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
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned int) ((((long long int) ((((/* implicit */int) (unsigned char)112)) * (((/* implicit */int) (unsigned char)112))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-118)) <= (((/* implicit */int) (short)-9535))))))));
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-114)))))));
                            var_19 -= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)149)) < (((/* implicit */int) (short)25002))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1]))));
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min(((-(((long long int) 3862180375U)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1] [i_0] [i_0])) * (((/* implicit */int) arr_7 [i_1] [i_1] [i_0]))))) < ((+(255U)))))))))));
                arr_12 [i_0] = ((/* implicit */unsigned short) min((((unsigned char) min(((short)25002), (((/* implicit */short) arr_7 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned char) ((var_13) < (((/* implicit */unsigned int) ((/* implicit */int) min(((short)25002), (((/* implicit */short) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1])))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 3; i_4 < 8; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            {
                var_21 &= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1179978466)) * (8501767368195111877ULL))))))) <= (((/* implicit */int) var_0))));
                var_22 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */unsigned int) -1185970582)) <= (2417495642U)))) < (((/* implicit */int) ((unsigned short) (short)-128))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)-128)) < (((/* implicit */int) (_Bool)0))))) <= ((-(((/* implicit */int) var_0))))))))));
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((-520495726) <= (-1185970580))))))) ? (((/* implicit */int) ((unsigned char) (((-2147483647 - 1)) < (((/* implicit */int) (_Bool)1)))))) : (1179978466)));
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (((+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4] [i_4] [i_4]))) : (2479988585U))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4] [i_5] [i_5]))) < (((((/* implicit */_Bool) (unsigned char)1)) ? (1258992248U) : (((/* implicit */unsigned int) 2096128)))))))))))));
            }
        } 
    } 
    var_25 |= ((/* implicit */short) ((((/* implicit */int) ((short) -441516551))) / ((+(((((/* implicit */int) (_Bool)1)) * (-1185970582)))))));
    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)-25003)) : (320040844)))) ? (((/* implicit */unsigned int) ((2147483637) / (320040844)))) : (var_13))) * (((/* implicit */unsigned int) ((/* implicit */int) (short)25028))))))));
}
