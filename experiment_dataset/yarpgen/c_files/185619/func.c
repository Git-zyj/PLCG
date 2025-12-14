/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185619
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
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)89))))) ? (((((/* implicit */_Bool) (unsigned char)161)) ? (arr_1 [i_1]) : (arr_1 [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [i_0 - 1]) / (arr_2 [i_1])))) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) ((unsigned char) 131071ULL))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_17 = var_7;
                            arr_9 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) arr_3 [i_0 + 1] [i_0] [i_0 - 1]);
                            arr_10 [i_0 - 3] [i_1] [i_2 - 1] [i_3] [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) (unsigned char)169)) % (((/* implicit */int) (unsigned char)4)))) : (((/* implicit */int) (!(arr_5 [i_1] [i_2 + 1] [i_3 - 1])))))), (arr_6 [i_0 + 1] [i_1])));
                            var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)81))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (unsigned char i_5 = 2; i_5 < 15; i_5 += 3) 
                    {
                        {
                            arr_16 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_11)), (var_7)));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_0] [i_1] [i_4] [i_4] [i_4] [i_5 + 1])) - (((/* implicit */int) (!(((/* implicit */_Bool) -67108864)))))))) : (((unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)165)), (916923936U))))));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((_Bool) arr_6 [i_0] [i_5 + 1])) ? (arr_3 [i_1] [i_5 + 1] [i_0 - 2]) : (min((((/* implicit */unsigned long long int) var_5)), (13433439018557883552ULL)))))) ? (max((arr_0 [i_5 - 1]), (max((((/* implicit */unsigned long long int) var_8)), (14009214316635250394ULL))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (arr_0 [i_1]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        {
                            var_21 = arr_11 [i_0 - 3] [i_6] [i_7];
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (arr_7 [i_0 + 1] [i_0 - 3] [i_0] [i_0 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)32))))) : (((/* implicit */int) ((unsigned char) ((var_11) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                            var_23 = var_11;
                            var_24 = ((/* implicit */unsigned char) ((_Bool) ((unsigned char) (unsigned char)232)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) 255U);
}
