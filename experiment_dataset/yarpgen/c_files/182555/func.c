/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182555
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_15))));
    var_19 = ((/* implicit */long long int) -1716710778);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_0] [9LL] = ((/* implicit */long long int) ((((/* implicit */int) ((-469160707) < (((/* implicit */int) (unsigned short)42331))))) + (((/* implicit */int) (unsigned short)65533))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (int i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 469160707)) ? (((-8748844590417429067LL) - (-8748844590417429063LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) -469160707)) / (2798947408U))))))) ? ((-(((((/* implicit */_Bool) 8748844590417429087LL)) ? (((/* implicit */long long int) 482193557)) : (-8947911626297811549LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)35))) / (-8748844590417429067LL))) != (((/* implicit */long long int) 469160726))))))));
                            var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1347465764)) & (18267966965263283531ULL)))) ? (-1716710751) : ((+(-1347465764)))));
                            var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 469160696)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)55))) : (((4281881301U) << (((18267966965263283557ULL) - (18267966965263283542ULL)))))));
                            arr_16 [(unsigned char)9] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)16374)) || ((_Bool)1))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)35555)) ^ (-111918298)))) : (((((/* implicit */long long int) 1347465764)) | (-2859815552644144393LL)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) 1347465748))));
                var_23 *= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(178777108446268085ULL))))))) < (((/* implicit */int) ((((/* implicit */int) (unsigned short)54609)) != (-1759245351))))));
            }
        } 
    } 
}
