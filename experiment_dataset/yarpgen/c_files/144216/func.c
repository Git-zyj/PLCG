/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144216
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
    var_15 = ((/* implicit */unsigned short) (((~((-(((/* implicit */int) var_5)))))) >> ((((+((+(((/* implicit */int) (short)-5960)))))) + (5969)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) >= (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_0 [i_0]))));
        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_0] [14])) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-5960)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (unsigned char)211))))) : ((+(max((((/* implicit */unsigned int) (short)5977)), (67092480U))))));
        var_17 = ((((_Bool) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) arr_2 [(_Bool)1] [i_0])) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((5227842505797561106ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? ((-(((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (1984379419) : (((/* implicit */int) var_7))))))) : ((+(max((((/* implicit */unsigned long long int) var_0)), (arr_0 [i_0]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_4 [i_1])))) ? (max((arr_4 [i_1]), (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_4 [i_1]) : (((/* implicit */int) arr_5 [i_1] [i_1]))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) min((min((13218901567911990509ULL), (18446744073709551587ULL))), (((/* implicit */unsigned long long int) arr_4 [i_1]))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    {
                        var_19 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_3] [i_1])) ? ((+(((/* implicit */int) (unsigned char)255)))) : ((-(((/* implicit */int) (_Bool)0)))))), ((+((-(2147483647)))))));
                        var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (signed char)94)) ? (-6404987697120273756LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4] [i_3] [i_2] [i_1])))))));
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (short)-11359))));
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned long long int) max((6631412114439170296LL), (((/* implicit */long long int) var_5))));
}
