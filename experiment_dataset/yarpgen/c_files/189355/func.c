/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189355
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
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            arr_8 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0] = var_1;
                            var_14 ^= ((/* implicit */int) 0U);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_18 [i_0 + 1] [i_1] [i_4] [i_5] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 21U)) ? (331043573524599020ULL) : (((/* implicit */unsigned long long int) 19U))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [(unsigned char)3] [i_0]))) : (arr_2 [(_Bool)1]))), (((/* implicit */long long int) ((var_9) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_5))))) : (min((var_6), (((/* implicit */unsigned int) 345919328)))))))));
                                arr_19 [i_0] [i_1] [(unsigned short)14] [i_5] [i_0] [11] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (signed char)26))))));
                                arr_20 [i_0 + 3] [i_1] [i_0] [i_1] [i_6] [(unsigned short)14] = ((/* implicit */long long int) (+(var_13)));
                                var_15 = ((/* implicit */unsigned int) ((short) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (0LL)))), (((var_9) ? (((/* implicit */unsigned long long int) 0U)) : (var_1))))));
                                var_16 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) arr_6 [i_1] [i_6] [i_5])) : (((/* implicit */int) (unsigned short)19629))))) ? (min((2765591723234707514LL), (((/* implicit */long long int) (signed char)10)))) : (-6636018722463256818LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_0)))))))) : (((18115700500184952568ULL) % (((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 - 2] [i_1] [(unsigned char)15] [i_5]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 11U)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)10))) : (((((((/* implicit */_Bool) (signed char)-8)) && (((/* implicit */_Bool) var_12)))) ? (min((((/* implicit */long long int) var_7)), (var_8))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)17206)), (7U))))))));
    var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2209161724278612880LL)) ? ((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (var_10))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (576460752303423487LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) == (((((/* implicit */_Bool) 10U)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (var_1)))))) ? (((/* implicit */int) var_12)) : (((((((/* implicit */int) (signed char)-116)) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */long long int) 4294967295U)) > (8935141660703064064LL))))))));
}
