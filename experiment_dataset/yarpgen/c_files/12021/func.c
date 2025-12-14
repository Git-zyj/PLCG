/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12021
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_18 = ((arr_1 [i_0] [i_1]) + (((/* implicit */int) var_16)));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (1607995336U) : (((/* implicit */unsigned int) arr_0 [i_1] [(signed char)7]))));
            var_19 = ((/* implicit */signed char) 4294967291U);
            arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1607995336U)) ? (((/* implicit */unsigned int) 1213217790)) : (1724649201U)));
        }
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            var_20 = ((unsigned int) 1435524579U);
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_6 [3ULL]))) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (((/* implicit */int) (!(arr_9 [i_0] [i_2]))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        {
                            var_21 = (~(((/* implicit */int) (unsigned short)7)));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_2] [i_4])) && (((/* implicit */_Bool) arr_10 [(unsigned char)14] [i_2]))));
                        }
                    } 
                } 
            } 
            arr_22 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) arr_19 [i_0] [i_2] [i_0]);
            arr_23 [i_2] [i_0] [i_0] = arr_17 [i_0] [i_0] [20LL] [i_0] [i_0];
        }
        var_23 -= ((/* implicit */int) (signed char)86);
    }
    var_24 = ((/* implicit */unsigned short) var_14);
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
    {
        for (int i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            {
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 4184711199U)) ? (-1789536491) : (-389504358))), (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_6])) ? (((-8922295087653909771LL) | (((/* implicit */long long int) 389504357)))) : (arr_17 [i_7] [2ULL] [i_7] [i_7] [i_7])))) : (min((((/* implicit */unsigned long long int) arr_18 [i_6] [i_7] [i_7] [i_7])), (((((/* implicit */_Bool) 389504357)) ? (14424764660003769890ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60073)))))))));
                var_26 = min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (arr_17 [i_6] [i_6] [i_6] [i_6] [(signed char)13])))), (max((((((/* implicit */_Bool) arr_1 [i_6] [i_6])) ? (8835095389633783103ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6] [i_6] [i_6] [i_7] [i_7]))))), (((/* implicit */unsigned long long int) ((-389504357) / (arr_5 [i_6] [i_7])))))));
            }
        } 
    } 
    var_27 = var_17;
    var_28 |= ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)220)) ? (-227859800) : (((/* implicit */int) (short)63)))), (((int) ((((/* implicit */_Bool) (short)-55)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
}
