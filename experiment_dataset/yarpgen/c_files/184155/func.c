/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184155
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
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max((((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 2147334991U)))), (var_3)))), (var_5))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)62))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_18 += max((max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_2]))))), (var_11))), (((/* implicit */unsigned int) ((_Bool) var_2))));
                        var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (7620441961258714376ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((var_7) == (((/* implicit */long long int) 2U)))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 1; i_4 < 11; i_4 += 1) 
    {
        for (signed char i_5 = 1; i_5 < 10; i_5 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 1; i_6 < 10; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */int) 3622201749109723670LL);
                            arr_25 [i_5] [i_5 - 1] [i_6] [i_7] = ((/* implicit */unsigned int) max(((+((-(7620441961258714376ULL))))), (((/* implicit */unsigned long long int) (+(var_0))))));
                        }
                    } 
                } 
                arr_26 [i_5] [i_5] = ((/* implicit */unsigned long long int) (-(var_9)));
            }
        } 
    } 
    var_21 ^= ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)56107)))), (5307703389692203334ULL)))));
    var_22 = (unsigned short)9429;
}
