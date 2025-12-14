/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116733
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) (~(-5554618230548089491LL)));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_14 [i_3] [i_3] [i_3] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_17 |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32757)) ? (((/* implicit */int) (short)-32757)) : (((/* implicit */int) min((((/* implicit */short) (signed char)28)), ((short)-4584))))))), (min((((/* implicit */unsigned int) (short)0)), (((((/* implicit */_Bool) (short)2744)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-13207))) : (534773760U)))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] = ((_Bool) min(((~(((/* implicit */int) arr_10 [i_1] [i_0])))), (((/* implicit */int) min((((/* implicit */short) (signed char)-73)), ((short)4035))))));
                arr_16 [i_0] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4904)) ? (4294967293U) : (((/* implicit */unsigned int) 1360520108))))) ? (var_13) : (((unsigned long long int) var_13))))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 1; i_5 < 7; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        {
                            var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13220))) <= (16889949042730490684ULL))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4171408160U)));
                            var_19 *= ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) (short)-2235)), (((((/* implicit */_Bool) 25ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6] [i_0] [i_1] [i_0]))) : (1103755791U))))), (((/* implicit */unsigned int) (unsigned short)27220))));
                            arr_22 [i_0] [i_0] = ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) arr_13 [i_0] [i_1] [i_5] [i_0] [i_6]))))), (14595408885489488326ULL)))));
                            arr_23 [i_0] = ((((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) -90651556))))) || (((_Bool) (short)-13220)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((min((arr_0 [i_0] [i_0]), ((signed char)-51))), (((/* implicit */signed char) ((arr_20 [i_0] [i_1] [i_0] [i_1] [i_6]) > (((/* implicit */unsigned long long int) 4171408160U)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */short) (+(0U)));
    var_21 &= ((/* implicit */signed char) min((-1261188447), (((((/* implicit */int) ((short) (signed char)118))) / (1804668104)))));
    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                var_23 *= ((/* implicit */int) (!(((/* implicit */_Bool) (-(min((((/* implicit */int) var_10)), (arr_26 [i_7] [i_7] [i_7]))))))));
                var_24 &= ((/* implicit */short) ((((/* implicit */int) max((arr_25 [i_8]), (arr_25 [i_8])))) >> (((((/* implicit */int) ((signed char) arr_25 [i_7]))) - (65)))));
                arr_28 [i_8] = min((((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_25 [i_8])) || (((/* implicit */_Bool) var_6))))))), (min((((/* implicit */unsigned long long int) arr_26 [i_7] [i_7] [i_7])), ((-(1272510229691923368ULL))))));
            }
        } 
    } 
}
