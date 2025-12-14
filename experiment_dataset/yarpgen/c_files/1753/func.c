/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1753
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
    var_14 = ((/* implicit */signed char) max((18014398509465600LL), (((/* implicit */long long int) (unsigned char)221))));
    var_15 = ((/* implicit */unsigned char) max((max((((/* implicit */int) (unsigned char)215)), (((((/* implicit */int) (unsigned char)221)) / (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) (unsigned char)226))))), ((unsigned char)29))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) min(((unsigned char)254), (((/* implicit */unsigned char) (signed char)96))));
                var_16 = ((/* implicit */signed char) (unsigned char)18);
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    var_17 = max((((/* implicit */int) (unsigned char)228)), (-2147483630));
                    var_18 = ((/* implicit */int) (_Bool)1);
                }
                var_19 = ((/* implicit */unsigned long long int) min(((((((_Bool)1) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (unsigned char)174)))) * (((/* implicit */int) max((((/* implicit */short) (unsigned char)212)), ((short)-25269)))))), (max((-932503961), (((/* implicit */int) ((2147483630) != (932503969))))))));
                /* LoopNest 3 */
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    for (unsigned char i_4 = 3; i_4 < 10; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 4; i_5 < 11; i_5 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)35)));
                                arr_16 [i_0] [i_1] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) max(((+((~(((/* implicit */int) (signed char)96)))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((2237090255550514089LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56))))))) < (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (2237090255550514089LL))))))));
                                arr_17 [i_0] [i_1] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(max((1121457375245650465ULL), (((/* implicit */unsigned long long int) -2147483627))))))) ? (((/* implicit */int) max((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)230)))), ((_Bool)1)))) : (((/* implicit */int) ((max((((/* implicit */unsigned long long int) -2237090255550514089LL)), (18446744073709551601ULL))) >= (((((/* implicit */_Bool) 1432745063361020067LL)) ? (1121457375245650465ULL) : (17325286698463901173ULL))))))));
                                arr_18 [i_1] = ((/* implicit */short) (((~(min((((/* implicit */unsigned long long int) -1432745063361020067LL)), (14ULL))))) % (max(((((_Bool)1) ? (((/* implicit */unsigned long long int) 8842497606095309077LL)) : (17325286698463901151ULL))), (max((1121457375245650460ULL), (1121457375245650480ULL)))))));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483630)) && (((/* implicit */_Bool) (unsigned char)249))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
