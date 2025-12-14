/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188689
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
    var_11 = ((/* implicit */unsigned short) -1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_12 += (((-(-7270847891293984950LL))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))) : (2706143351U)))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_13 -= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))));
                        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))) > (198081203U))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((signed char) (unsigned short)3)));
        arr_12 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) : (131064ULL))))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 6210194936312817894ULL)))) : (((arr_3 [(unsigned char)1]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61)))))));
    }
    var_16 &= ((/* implicit */unsigned short) -9223372036854775802LL);
    var_17 = ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) || ((_Bool)1)))), (((unsigned short) -9223372036854775802LL)))))) - (((long long int) var_10)));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        for (short i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            {
                arr_18 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (unsigned short)0);
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        {
                            var_18 ^= ((/* implicit */unsigned int) ((long long int) ((short) var_5)));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)34))))) ^ (arr_22 [i_5]))))));
                            arr_24 [i_7] = ((/* implicit */signed char) -7565622327120402444LL);
                        }
                    } 
                } 
                var_20 += ((/* implicit */int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)2136))))) : (max((-2137282542122148247LL), (((/* implicit */long long int) 3888217099U)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)73)))))));
                var_21 = ((/* implicit */long long int) ((min((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)32764)))), (((((/* implicit */int) (signed char)13)) != (((/* implicit */int) arr_23 [i_4] [(unsigned char)21] [i_5] [i_5] [i_5])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4] [i_5] [i_5])) ? (((/* implicit */int) (unsigned short)58357)) : (((/* implicit */int) (short)-32765))))) && (((/* implicit */_Bool) (unsigned char)74)))))) : (min((((/* implicit */unsigned long long int) 198081196U)), (((9857808638675239595ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
            }
        } 
    } 
}
