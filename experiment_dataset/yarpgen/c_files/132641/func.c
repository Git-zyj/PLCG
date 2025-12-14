/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132641
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_11 [i_2] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) var_8)))), (((((/* implicit */_Bool) var_8)) ? (var_2) : (min((((/* implicit */unsigned long long int) (unsigned char)65)), (0ULL)))))));
                    var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)496))) >= (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)192))))))))));
                    arr_12 [i_2] = ((/* implicit */int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((((/* implicit */int) (short)-178)) >= (((/* implicit */int) (short)0))))) : (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_3)) : (var_0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22872))) : (3966473054735540008ULL))))));
                }
            } 
        } 
    } 
    var_12 = ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) min(((signed char)-87), ((signed char)-115)))), ((unsigned char)39))))) / (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) var_9)))));
    var_13 = var_4;
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (var_8))))));
        arr_15 [i_3 - 1] = ((/* implicit */short) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_7)))) && (((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_7))))));
    }
    for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 4) 
    {
        arr_18 [i_4] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_1))))) % (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
        var_15 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3966473054735540006ULL)) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)107))) / (18446744073709551593ULL))))));
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            for (int i_6 = 3; i_6 < 7; i_6 += 1) 
            {
                for (short i_7 = 1; i_7 < 8; i_7 += 1) 
                {
                    {
                        var_16 = ((((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_9))) << (((((((/* implicit */int) var_5)) << (((((((/* implicit */_Bool) (short)-21)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-26))))) - (18446744073709551611ULL))))) - (363))));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (var_2)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max((((/* implicit */short) var_1)), (var_4))))));
                        arr_28 [i_7] [i_6 + 2] [i_5] [i_5] [i_5] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) max((14839138889021840089ULL), (162655874882598706ULL)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */int) var_7)))))));
                        var_18 |= ((/* implicit */int) max((((((/* implicit */_Bool) ((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) var_6))));
                    }
                } 
            } 
        } 
        arr_29 [2LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (9771420484697147425ULL) : (((/* implicit */unsigned long long int) 1178563069))))) && (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_1))))));
    }
    for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2)))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (var_9)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) max((var_1), (var_5))))));
        var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_2)) ? (((var_3) / (((/* implicit */int) var_5)))) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (var_8)))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (var_2) : (min((var_0), (((/* implicit */unsigned long long int) var_4))))));
    }
}
