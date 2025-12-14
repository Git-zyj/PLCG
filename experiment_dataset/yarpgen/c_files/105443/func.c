/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105443
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
    var_12 |= ((/* implicit */signed char) (((!(((((/* implicit */int) (unsigned char)150)) <= (((/* implicit */int) (unsigned char)150)))))) ? (((/* implicit */unsigned int) max((((((/* implicit */int) var_9)) - (((/* implicit */int) (unsigned char)105)))), (((/* implicit */int) (unsigned short)0))))) : (((unsigned int) (unsigned char)105))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((unsigned long long int) min((((long long int) (short)8191)), (((((/* implicit */_Bool) 1109023015)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-8999371230574826331LL))))));
                var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-5293))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) var_1);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)99)) ^ (((/* implicit */int) (unsigned short)4431))))) <= (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)35563))) ^ (var_2))))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (unsigned short i_3 = 1; i_3 < 23; i_3 += 4) 
        {
            for (unsigned char i_4 = 2; i_4 < 23; i_4 += 2) 
            {
                {
                    arr_13 [i_2] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (short)8191))) ? (((((((/* implicit */_Bool) -6861724965588510684LL)) ? (var_7) : (((/* implicit */unsigned long long int) arr_6 [i_4])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)134)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (unsigned short)39525))) & (((((/* implicit */int) arr_8 [i_3] [i_4])) | (((/* implicit */int) (unsigned short)26010)))))))));
                    var_16 = ((/* implicit */int) (_Bool)1);
                    var_17 = ((/* implicit */unsigned long long int) ((arr_11 [1ULL] [i_3]) ? (arr_7 [i_3 - 1] [i_4 - 1]) : (((/* implicit */long long int) var_10))));
                    var_18 = ((/* implicit */int) 4673982873340991700ULL);
                }
            } 
        } 
    } 
}
