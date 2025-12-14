/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108277
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
    var_20 = ((/* implicit */_Bool) var_14);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */int) 6183978627367287669ULL);
                    var_22 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_14)))) / (1692615145402319028LL));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        arr_11 [i_3] [i_1] = ((/* implicit */unsigned long long int) 1692615145402319034LL);
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((9317588286849289663ULL) < (7916975819615153371ULL)))))));
                        var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)29448))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) ((-5097822456861318628LL) == (((/* implicit */long long int) var_12)))))) - ((+(8787503087616ULL)))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                {
                    var_25 = ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
                    var_26 = ((/* implicit */unsigned char) max(((((+(var_17))) / (9052362171406542263ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_4)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (signed char)6))))))))));
                    var_27 = ((/* implicit */int) arr_4 [i_4]);
                    var_28 &= ((/* implicit */int) var_19);
                }
            } 
        } 
    } 
}
