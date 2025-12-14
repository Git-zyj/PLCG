/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101862
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (short)-2379))) ? (max((((/* implicit */unsigned long long int) ((short) 584684107697074116ULL))), ((-(30ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)22))) : (17862059966012477510ULL)))) ? (arr_3 [i_0 - 2] [i_0] [i_0]) : (((/* implicit */long long int) (+(((/* implicit */int) var_5))))))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
                    {
                        var_11 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])), (290298545817303780ULL))) | (((/* implicit */unsigned long long int) max((-7736186957401625500LL), (((/* implicit */long long int) (short)-1)))))));
                        var_12 = ((/* implicit */int) max((((long long int) ((unsigned long long int) 710744693324974112ULL))), (arr_7 [i_0 + 1] [i_0] [i_0 + 2] [i_0] [i_0 + 1] [i_0])));
                    }
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
                    {
                        var_13 = ((/* implicit */long long int) ((unsigned int) max(((unsigned short)0), (((/* implicit */unsigned short) (signed char)-88)))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned short) arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))), (max((2627921087132831517ULL), (((/* implicit */unsigned long long int) var_0))))));
                        var_14 = ((/* implicit */int) ((((((_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)248)))))) : (((((/* implicit */_Bool) var_1)) ? (710744693324974112ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)152)))));
                        var_15 = ((/* implicit */unsigned int) ((2750223) | (((/* implicit */int) (unsigned char)10))));
                    }
                    arr_16 [i_0] [i_0] = ((/* implicit */int) -9223372036854775806LL);
                    var_16 = ((/* implicit */unsigned char) -9223372036854775806LL);
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) -6097233046367951515LL)))) && (var_7)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) (_Bool)1);
    var_18 = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */long long int) ((unsigned char) 9LL))), (var_6))));
}
