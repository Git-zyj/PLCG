/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164426
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) (signed char)19);
        var_18 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */short) min((var_19), (var_12)));
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 10; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) (unsigned char)150);
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            {
                                var_21 = max((arr_7 [i_3] [i_4] [i_5]), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (var_7)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned short) var_16))))));
                                arr_17 [(unsigned char)5] [i_5] [i_3] [i_3] [9] = max((((((/* implicit */_Bool) (unsigned char)0)) ? (226954271108571856LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) var_3)));
                                arr_18 [i_5] = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_3 [i_4])))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_3]))))) : (var_11)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_19 [(unsigned short)0] |= ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */int) var_3))))) ? (-347462040) : ((~(((/* implicit */int) arr_11 [i_1] [i_1])))))), (((/* implicit */int) ((((/* implicit */_Bool) 2235939768U)) || (((/* implicit */_Bool) (unsigned char)64)))))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 2; i_6 < 9; i_6 += 4) 
        {
            var_22 ^= ((/* implicit */long long int) (unsigned short)21738);
            var_23 += ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))) <= (max(((~(((/* implicit */int) (short)(-32767 - 1))))), ((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)18977))))))));
        }
        var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)137)) && (((/* implicit */_Bool) 1048576LL))))), (127))))));
    }
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((_Bool) var_16)) ? ((-(var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_15), (((/* implicit */short) var_4))))))))) ? (((((/* implicit */_Bool) -226954271108571856LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((var_11) != (((/* implicit */long long int) ((/* implicit */int) (short)-18958)))))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */int) var_12)) > (var_7))))))));
}
