/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159115
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) (~(((/* implicit */int) ((arr_0 [i_0 - 1]) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535)))))))))))));
                arr_4 [i_0] = ((/* implicit */long long int) min((max((arr_1 [i_0 + 2] [i_0 + 1]), (((/* implicit */unsigned long long int) (+(arr_3 [i_0 - 1] [i_1] [i_0])))))), (((/* implicit */unsigned long long int) 5638342767776716429LL))));
                var_12 = ((/* implicit */_Bool) ((3693405892U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) min((var_1), (var_1)));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_1)))) && (((/* implicit */_Bool) var_0))));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    for (int i_5 = 2; i_5 < 21; i_5 += 1) 
                    {
                        {
                            var_15 += ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) * ((((~(var_8))) % (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) || (((/* implicit */_Bool) var_7))))))))));
                            var_16 = ((/* implicit */unsigned int) max((var_16), ((-((-(3693405892U)))))));
                            var_17 = ((/* implicit */int) max((arr_15 [i_5 + 1] [i_3] [i_4] [i_2]), (((min((6003389031159015847LL), (((/* implicit */long long int) 2975740021U)))) / (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)33167)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        {
                            var_18 &= -5169235798714713538LL;
                            var_19 &= ((/* implicit */unsigned long long int) (((~(arr_5 [i_7]))) & (((/* implicit */unsigned int) (~(var_6))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(arr_20 [20U] [i_2] [i_3] [i_3] [i_3] [i_3])))) * (var_8))))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    for (short i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) (((~((~(((/* implicit */int) var_4)))))) <= ((-(16080221)))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (+(max((((/* implicit */int) (signed char)-34)), (var_6))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_10 = 3; i_10 < 22; i_10 += 2) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 25; i_12 += 4) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_0))));
                            var_24 -= ((/* implicit */unsigned int) min(((-((-(((/* implicit */int) arr_32 [(_Bool)1] [i_13] [i_12])))))), (((/* implicit */int) arr_28 [i_13] [i_11]))));
                        }
                    } 
                } 
                var_25 += ((/* implicit */unsigned char) (_Bool)1);
            }
        } 
    } 
}
