/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169363
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_12 = ((/* implicit */_Bool) max((((min((((/* implicit */unsigned long long int) (signed char)-115)), (var_11))) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) min(((unsigned char)33), (((/* implicit */unsigned char) arr_0 [i_0])))))));
        var_13 -= ((/* implicit */_Bool) arr_0 [i_0]);
        var_14 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2147481600) << (((((/* implicit */int) (short)31363)) - (31363)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)223))))) : (((/* implicit */int) (unsigned short)48773))))) == (((unsigned int) max((var_8), (((/* implicit */unsigned long long int) (unsigned short)31398)))))));
    }
    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_10)), (var_11)));
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        for (unsigned char i_2 = 1; i_2 < 14; i_2 += 4) 
        {
            {
                var_16 = (unsigned char)50;
                arr_10 [i_1] [i_1] = ((/* implicit */long long int) var_1);
                arr_11 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-54)) + (2147483647))) << (((2713089106369690092LL) - (2713089106369690092LL)))))) ? (((/* implicit */long long int) var_4)) : (((1954193030379263112LL) ^ (((/* implicit */long long int) 1488058430U))))))) > (((((/* implicit */unsigned long long int) max((-2891143261276156309LL), (-4528976865945969991LL)))) | (14725018406598181261ULL)))));
                var_17 = ((((/* implicit */_Bool) min((min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)64987))), (((/* implicit */unsigned short) (unsigned char)192))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_1])), (arr_8 [i_1] [i_2 + 2]))))));
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (signed char)53))));
                            var_19 += ((/* implicit */unsigned short) (((~(3721725667111370354ULL))) << (((((/* implicit */int) max((arr_8 [i_2 + 1] [i_2 + 2]), (((/* implicit */unsigned short) (_Bool)1))))) - (2068)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
