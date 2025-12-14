/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129118
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213))) ^ (386635531U)));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)17)), (1568052253610169663LL)));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 386635535U)) ? (((/* implicit */int) max(((unsigned short)19), (max(((unsigned short)6), ((unsigned short)32713)))))) : (((/* implicit */int) max((min(((unsigned short)28), (((/* implicit */unsigned short) (unsigned char)43)))), (((/* implicit */unsigned short) min((((/* implicit */short) (unsigned char)107)), ((short)304)))))))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)34569)) ^ (((/* implicit */int) (unsigned short)15830))));
                    arr_7 [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)41))))) || (((/* implicit */_Bool) (short)32766)))) ? ((+(((/* implicit */int) (signed char)-70)))) : (((/* implicit */int) (unsigned short)65517))));
                }
                for (unsigned char i_3 = 1; i_3 < 20; i_3 += 2) /* same iter space */
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */short) max(((+(((/* implicit */int) (signed char)-88)))), (((((/* implicit */int) ((((/* implicit */int) (short)-1)) <= (127)))) + (((/* implicit */int) (unsigned char)148))))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3554846900U)) && (((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8160))) & (-7349855660655272331LL))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40698))))))));
                }
                arr_11 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4)) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) (short)304))))) || (((/* implicit */_Bool) (unsigned short)7728))));
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 19; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (long long int i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((4294967286U), (((/* implicit */unsigned int) (short)2619))))) ? (((/* implicit */unsigned int) ((63) & (127)))) : (max((((/* implicit */unsigned int) min(((unsigned char)45), ((unsigned char)0)))), (max((3219250709U), (((/* implicit */unsigned int) (short)-312))))))));
                                var_22 ^= ((/* implicit */long long int) ((short) ((((/* implicit */int) (short)-2172)) - (-1))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)43)) > (((/* implicit */int) (short)-3000))));
                                arr_20 [i_0] [i_0] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (_Bool)0);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) min((max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) -2710394909479422812LL)) || (((/* implicit */_Bool) 18446744073709551615ULL))))))), (((/* implicit */int) (short)311))));
}
