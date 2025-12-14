/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170770
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_17 *= ((/* implicit */signed char) ((((7651178011644204478LL) / (7651178011644204476LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) 134217727U)))))))));
                    arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1922296258763471806LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -1922296258763471806LL)) ? (((/* implicit */int) (short)-32641)) : (((/* implicit */int) (signed char)26))))) >= ((((_Bool)0) ? (1922296258763471805LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))))) : (-7651178011644204456LL)));
                    var_18 = (!(((7651178011644204478LL) == (-1LL))));
                    arr_8 [i_0] [i_0] [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-((((_Bool)1) ? (arr_5 [i_2] [i_2]) : (((/* implicit */int) (signed char)-33))))))) | (min((((/* implicit */long long int) ((unsigned short) (unsigned short)0))), (arr_4 [i_2] [i_1])))));
                }
            } 
        } 
    } 
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)27))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) <= (11974084359340902119ULL))))) : (((((/* implicit */_Bool) (signed char)87)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (unsigned short)65535)));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)10265)), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-633702370489609660LL)))))) ? (((((/* implicit */_Bool) min(((signed char)(-127 - 1)), ((signed char)40)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (633702370489609659LL) : (((/* implicit */long long int) 374359133))))) : (((((/* implicit */_Bool) var_16)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)87))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1)))) ^ (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_6))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5))));
}
