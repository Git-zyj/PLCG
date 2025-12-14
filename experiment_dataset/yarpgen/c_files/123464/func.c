/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123464
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))), (((((/* implicit */_Bool) (short)12383)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-2078))) : ((~(arr_1 [8U])))))));
        var_17 = ((/* implicit */unsigned short) (signed char)62);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_18 ^= ((/* implicit */int) arr_11 [i_0] [i_1] [i_4] [i_4] [i_3 - 2] [i_4 + 2]);
                                arr_15 [i_0] [i_0] [i_1] [i_4 + 1] = ((/* implicit */unsigned int) min(((short)32752), (((/* implicit */short) (signed char)-67))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) ((((arr_5 [i_2 + 2]) < (arr_5 [i_2 + 1]))) ? (((int) (signed char)-1)) : ((+(((/* implicit */int) var_8))))));
                    arr_16 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(max((((/* implicit */long long int) (signed char)66)), (-6401866392607250418LL))))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_20 = ((unsigned short) (signed char)-79);
                                var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)24))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 19; i_7 += 3) 
                    {
                        for (signed char i_8 = 2; i_8 < 20; i_8 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_1] [i_1])) ? (min((-6401866392607250423LL), (((/* implicit */long long int) (signed char)-47)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_3 [i_2 + 1] [i_1]), (((/* implicit */unsigned int) var_14)))))))))));
                                var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) 7678801385041636254LL))));
                                var_24 = ((/* implicit */long long int) (signed char)60);
                                arr_25 [i_0] [16LL] [i_1] = ((/* implicit */short) 18446744073709551613ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_21 [i_0] [(_Bool)1] [0] [i_0])), (min((var_10), (((/* implicit */unsigned short) (short)29184)))))))) != (arr_7 [i_0] [i_0] [i_0])));
    }
    for (short i_9 = 4; i_9 < 10; i_9 += 2) 
    {
        var_26 ^= ((((/* implicit */int) (short)-32751)) >= (((/* implicit */int) arr_22 [i_9 - 1] [i_9] [i_9] [(signed char)12] [i_9] [i_9 - 4])));
        arr_28 [i_9 - 2] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (~(arr_0 [i_9 - 1] [i_9 - 1])))) ? ((+(((/* implicit */int) arr_27 [i_9 - 4] [i_9 - 3])))) : (((((/* implicit */_Bool) arr_18 [i_9 - 3] [i_9 - 1])) ? (((/* implicit */int) arr_10 [i_9] [i_9 - 1] [i_9 + 1])) : (arr_14 [i_9] [i_9] [i_9 - 1] [i_9 - 2] [i_9 - 2] [i_9 - 4] [i_9]))))) + (2147483647))) >> (((((/* implicit */int) arr_24 [i_9] [i_9 + 1] [i_9 - 1])) - (9706)))));
    }
    var_27 = ((/* implicit */signed char) max(((-(max((((/* implicit */unsigned long long int) 7678801385041636254LL)), (7301185330484626766ULL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (short)32767)), (var_10)))))))));
}
