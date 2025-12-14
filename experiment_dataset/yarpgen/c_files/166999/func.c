/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166999
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned char) (~((((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) arr_12 [(signed char)11] [7] [i_2] [i_2] [(_Bool)1] [i_2])) : (var_9)))));
                                arr_13 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2])) ? (((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60826))) : (6265309971007948173LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)174))))) : (((/* implicit */long long int) min(((+(((/* implicit */int) (unsigned char)170)))), (((/* implicit */int) (signed char)85)))))));
                                var_21 = ((/* implicit */short) ((_Bool) (signed char)-81));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((var_14), (((/* implicit */long long int) var_19)))) | (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [(unsigned short)19] [i_0] [i_3] [i_4])))))) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) ((short) var_11)))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */int) ((((/* implicit */_Bool) -4802163419688592126LL)) || (((/* implicit */_Bool) var_18))))) : (((/* implicit */int) max((((/* implicit */signed char) var_1)), ((signed char)20)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-9)) ? (var_4) : (((/* implicit */int) (_Bool)1))))))))));
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)86))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)44417)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) max((arr_2 [i_2]), (((/* implicit */unsigned short) (unsigned char)82)))))))) ? ((-(((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_1] [i_2] [(_Bool)1]))))) : (((/* implicit */int) (unsigned char)7))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        for (int i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            {
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((long long int) (signed char)-2)))));
                arr_19 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (short)3587)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))) : (arr_5 [i_6] [i_5] [i_5] [i_5])));
                /* LoopNest 2 */
                for (long long int i_7 = 1; i_7 < 10; i_7 += 4) 
                {
                    for (unsigned char i_8 = 1; i_8 < 11; i_8 += 4) 
                    {
                        {
                            var_25 |= ((/* implicit */unsigned long long int) arr_0 [1U]);
                            arr_25 [(signed char)6] [i_8] [i_8] [i_8] [i_7] [(_Bool)1] = ((/* implicit */_Bool) (+((-(((/* implicit */int) ((unsigned char) var_6)))))));
                            var_26 = ((/* implicit */long long int) max((arr_24 [i_5] [i_6] [i_6] [i_8]), ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12))))))));
                        }
                    } 
                } 
                arr_26 [i_5] = ((/* implicit */short) arr_2 [(unsigned char)11]);
            }
        } 
    } 
    var_27 = ((/* implicit */int) max((((/* implicit */long long int) (_Bool)0)), (max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) var_4)) : (3464036404U))))))));
}
