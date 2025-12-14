/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175464
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
    var_19 = ((/* implicit */long long int) var_8);
    var_20 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                                var_22 = (~((~((+(((/* implicit */int) (signed char)28)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) arr_2 [i_6] [(unsigned short)4]);
                                var_24 = ((/* implicit */unsigned long long int) arr_4 [i_0]);
                                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_3 [i_0] [i_1])), ((unsigned short)41830)))) ? (((/* implicit */unsigned long long int) ((((int) arr_6 [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_10)))))))) : (max((((/* implicit */unsigned long long int) (signed char)-79)), (((unsigned long long int) arr_17 [i_0] [i_0] [i_2] [i_1] [i_6])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            {
                                var_26 += ((/* implicit */unsigned long long int) -1545625815);
                                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) var_10))));
                                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_12))))) : ((~(arr_1 [i_0])))));
                                arr_22 [i_0] [i_1] [i_7] [3] [i_7] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 2397001270U)) || (((/* implicit */_Bool) 2397001247U))))) << (((min((max((-1545625815), (((/* implicit */int) var_12)))), (((/* implicit */int) (signed char)-79)))) + (91)))));
                            }
                        } 
                    } 
                    var_29 -= ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_10)), (6052050468403743132LL))) ^ (((arr_19 [i_1]) ? (((4210341833111520578LL) ^ (-4210341833111520592LL))) : (((/* implicit */long long int) max((arr_1 [i_0]), (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_0])))))))));
                    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (signed char)-66))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned int) ((((var_1) || (((/* implicit */_Bool) var_17)))) && (max((((var_2) && (((/* implicit */_Bool) var_18)))), (var_15)))));
}
