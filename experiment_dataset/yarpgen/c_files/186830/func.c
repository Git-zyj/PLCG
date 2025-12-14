/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186830
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
    var_14 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-48)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)244)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_1) : (13115656336573712231ULL)))))));
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (16889678987130810022ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17))))), (min((((/* implicit */unsigned long long int) var_8)), (var_7))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((9203391017072147819LL) >> (((((/* implicit */int) (unsigned short)478)) - (468)))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) 2097151)) && (((/* implicit */_Bool) var_1)))))) : (((/* implicit */int) ((((/* implicit */int) ((_Bool) 947705508511588369ULL))) >= (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)17)), ((unsigned short)65534))))))))))));
                                var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 2039987180)), (min(((~(var_5))), (((/* implicit */unsigned long long int) ((_Bool) -1377240410)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 10; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) max((((unsigned long long int) ((unsigned long long int) var_8))), (((/* implicit */unsigned long long int) (-(((long long int) (_Bool)1))))))))));
                                var_19 = ((/* implicit */signed char) 130048ULL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_1] [i_2] [i_7] [i_1] = ((/* implicit */signed char) ((((unsigned long long int) (~(((/* implicit */int) (unsigned short)1))))) | (((((/* implicit */_Bool) (+(1330064579U)))) ? (13382040678835602646ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                                var_20 &= ((/* implicit */unsigned int) ((((unsigned long long int) (~(((/* implicit */int) (signed char)-126))))) >= (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)27492)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_0))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10657))) : (var_0))))))));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 1557065086578741594ULL)))) <= ((+(((((/* implicit */_Bool) 2822906957U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32761))) : (0ULL)))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) ((unsigned long long int) (-(4158042396314851494ULL))));
                }
            } 
        } 
    } 
}
