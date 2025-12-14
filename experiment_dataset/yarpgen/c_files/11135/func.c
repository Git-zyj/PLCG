/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11135
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((long long int) -35534392))) : (var_4)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)24)) * ((+((+(((/* implicit */int) arr_1 [i_0]))))))));
                var_19 = ((/* implicit */unsigned long long int) (unsigned char)7);
                arr_6 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) && (((/* implicit */_Bool) var_2))))) << (((min((var_8), (var_8))) - (2211738543U)))))) ? (((/* implicit */int) ((((/* implicit */long long int) min((3193081038U), (0U)))) >= (var_2)))) : (((/* implicit */int) var_15)));
                var_20 ^= 5100287861924360315LL;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_0] [(short)0] [i_2] [i_3] = ((/* implicit */unsigned char) arr_5 [i_3]);
                            arr_12 [i_3] [i_2] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) * (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-3654))))))) ? (((/* implicit */long long int) ((var_6) - (((/* implicit */unsigned int) ((int) 0)))))) : (((long long int) max((var_15), (((/* implicit */short) arr_1 [i_0]))))));
                            var_21 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(min((var_6), (1762072916U)))))) % ((-(var_7)))));
                            arr_13 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */long long int) arr_8 [i_1] [i_1] [i_0]);
                            var_22 = ((/* implicit */unsigned long long int) var_15);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            {
                arr_20 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) - (((/* implicit */unsigned long long int) arr_5 [i_5])))) > (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5] [i_5]))) * (2532894392U))), ((~(445725963U))))))));
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_13))));
                /* LoopNest 3 */
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_25 [i_4] [i_5] [i_6] [i_7] [i_4])), ((unsigned char)105))))) ^ (((var_14) | (((/* implicit */unsigned long long int) -1581611022841599143LL)))))), (((max((var_1), (((/* implicit */unsigned long long int) arr_18 [i_5] [i_5])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_21 [i_4] [i_4] [i_7])))))))))));
                                var_25 += ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) arr_26 [i_4] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (16765444923484053842ULL))), (((/* implicit */unsigned long long int) (short)32177)))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_9 [i_4] [i_6] [i_7] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4]))) : (var_12))))))));
                                var_26 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)89)) || (((/* implicit */_Bool) arr_8 [i_5] [i_6] [i_8])))))) : (max((((/* implicit */unsigned int) arr_22 [i_4] [i_4] [i_4])), (arr_19 [i_8]))))), (((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) var_4)))), (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_3)))))))));
                                var_27 = ((/* implicit */unsigned int) ((long long int) ((-825547391) - (((/* implicit */int) (signed char)-119)))));
                            }
                        } 
                    } 
                } 
                var_28 = ((/* implicit */signed char) arr_16 [11U]);
            }
        } 
    } 
    var_29 = ((/* implicit */short) var_5);
}
