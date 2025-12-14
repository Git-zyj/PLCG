/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128792
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_0))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        arr_3 [(unsigned char)0] [i_0 + 2] = ((/* implicit */unsigned char) (signed char)106);
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (signed char)-77))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) var_7)), ((short)-23631)))) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) (signed char)102))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (int i_3 = 2; i_3 < 18; i_3 += 2) 
            {
                for (unsigned int i_4 = 2; i_4 < 18; i_4 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) (signed char)79);
                        arr_15 [i_1] [i_1] [(unsigned short)17] = ((/* implicit */_Bool) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((((var_5) >> (((((/* implicit */int) (unsigned short)2229)) - (2198))))) - (8012305711ULL)))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (+(1724180095458640306ULL))))));
        var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)2231)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)120)))))) : (var_5)));
        arr_16 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_8 [i_1]))));
    }
    /* LoopNest 3 */
    for (unsigned short i_5 = 4; i_5 < 23; i_5 += 2) 
    {
        for (unsigned char i_6 = 2; i_6 < 24; i_6 += 4) 
        {
            for (unsigned short i_7 = 1; i_7 < 21; i_7 += 2) 
            {
                {
                    var_18 *= min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)90)) ^ (((/* implicit */int) (signed char)88)))) * (((/* implicit */int) (signed char)-97))))), ((~(arr_19 [i_5 + 2] [i_6 - 1] [i_7 + 4]))));
                    var_19 |= ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (1LL));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max(((unsigned char)255), (((/* implicit */unsigned char) (signed char)-84)))))));
                    /* LoopNest 2 */
                    for (short i_8 = 3; i_8 < 21; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_5)))) && (((/* implicit */_Bool) -7441850646754978208LL))))), (min((((/* implicit */signed char) var_10)), (((signed char) (signed char)-84))))));
                                var_22 -= ((/* implicit */unsigned short) 18446744073709551611ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
