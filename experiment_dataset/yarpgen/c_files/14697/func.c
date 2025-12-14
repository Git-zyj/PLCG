/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14697
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
    var_10 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) -702796774949254936LL))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned int) min((var_11), (((unsigned int) ((((/* implicit */int) arr_3 [(unsigned char)1] [i_0])) * (((/* implicit */int) arr_3 [i_0] [i_1 + 4])))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_15 [i_3] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_2] [i_3] [i_4] [i_3]);
                                var_12 = arr_14 [i_0 + 1] [i_1] [i_0 + 1] [i_3] [i_4] [i_3];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        var_13 |= ((/* implicit */long long int) ((((long long int) ((((/* implicit */_Bool) arr_18 [i_5])) && (((/* implicit */_Bool) (unsigned char)0))))) < (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((unsigned char) -3433493637464865371LL)))))));
        var_14 -= ((/* implicit */unsigned char) (!(((((/* implicit */int) (_Bool)1)) <= (var_5)))));
        arr_19 [i_5] &= (!((!(((/* implicit */_Bool) arr_18 [21U])))));
    }
    for (unsigned int i_6 = 4; i_6 < 12; i_6 += 3) 
    {
        arr_22 [10U] [i_6] = ((/* implicit */unsigned char) ((unsigned int) var_9));
        arr_23 [i_6] [2U] = ((/* implicit */unsigned char) min((min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65528))))), (((((/* implicit */int) (unsigned short)3584)) - (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (unsigned short)65528))));
        var_15 = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) arr_20 [i_6])))));
    }
    var_16 = ((/* implicit */int) (-(((((/* implicit */_Bool) min(((unsigned char)0), ((unsigned char)0)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) * (var_9)))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_3)))))));
}
