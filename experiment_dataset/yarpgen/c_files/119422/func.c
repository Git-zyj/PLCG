/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119422
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(-977400345)))) ? ((+(((/* implicit */int) arr_2 [i_1])))) : (((/* implicit */int) arr_2 [i_0]))));
                    var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6)) ? (977400345) : (255)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_2 [i_2 - 1])))) ^ (((-977400345) & (((/* implicit */int) arr_1 [i_0] [i_2 - 1]))))));
                    arr_11 [(signed char)22] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) 3870222484U);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            var_15 = ((/* implicit */signed char) var_4);
            arr_20 [(unsigned char)16] [i_4] [i_4] = ((/* implicit */signed char) var_5);
        }
        arr_21 [i_3] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_12 [i_3])) ? (var_5) : (((/* implicit */unsigned int) arr_8 [i_3] [i_3])))), (((/* implicit */unsigned int) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        var_16 = ((/* implicit */unsigned int) arr_16 [i_3] [i_3]);
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 1) 
            {
                {
                    var_17 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_5]))) : (var_11)))) ? (arr_15 [i_6 + 1]) : (((/* implicit */int) ((unsigned short) (short)-32767))))) | (((/* implicit */int) arr_24 [i_3] [i_5] [i_3]))));
                    arr_29 [i_3] [2ULL] [12U] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (short)32756)) == (((/* implicit */int) (unsigned short)30271))))) % (((/* implicit */int) ((((/* implicit */_Bool) 2143568138290372470LL)) || ((_Bool)1))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 3870222483U)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_8 [i_6 + 3] [i_6 + 2])) == (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6 + 3]))) - (var_5))))))) : (((long long int) ((((/* implicit */_Bool) (short)32756)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (short)25622)))))));
                    arr_30 [i_3] |= ((/* implicit */short) ((unsigned long long int) (signed char)56));
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) arr_0 [21U] [i_3]);
    }
    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned short) var_12)), (var_3)));
    var_21 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)63)))) : (((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13251))))))));
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) ((signed char) 3870222483U))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) ((signed char) var_0))))) : (((/* implicit */int) ((18270092395639406261ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_1)))))))))));
}
