/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129975
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 3; i_2 < 8; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (short)29239))))));
                        arr_11 [i_3] [i_2 + 1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((((/* implicit */int) (short)32763)) == (((/* implicit */int) (short)22043))))));
                    }
                    var_19 = ((/* implicit */int) (!((!(((/* implicit */_Bool) -1875021081))))));
                    var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(3156825993414351464ULL)))) ? (((/* implicit */int) (_Bool)1)) : (1875021081)));
                }
                arr_12 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), ((~(min((((/* implicit */unsigned long long int) (short)18144)), (10190607443190089717ULL)))))));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) 18446744073709551615ULL))));
                var_22 = ((/* implicit */signed char) -1875021081);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 2; i_4 < 20; i_4 += 1) 
    {
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            {
                arr_19 [i_4] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)132)), (2826697754041099296LL))))));
                var_23 = ((/* implicit */_Bool) (((((+(((/* implicit */int) ((signed char) 16802154539832574920ULL))))) + (2147483647))) << (((((/* implicit */int) (unsigned char)115)) - (115)))));
                var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)14958))))) ? ((~(0))) : ((+(((/* implicit */int) (_Bool)1))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    for (unsigned char i_7 = 3; i_7 < 21; i_7 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) (+(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))));
                            var_26 += ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 1015093183)) ? (((/* implicit */long long int) ((/* implicit */int) (short)21853))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-1313384354965753397LL)))))));
                            arr_24 [i_4] = (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)45810)) != (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))))));
                            var_27 = ((/* implicit */unsigned int) (signed char)123);
                            var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)130)) ? (((7341155347926938547ULL) << (0U))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)244)) ^ (((/* implicit */int) (unsigned char)197)))))))) || (((/* implicit */_Bool) ((((3547809634139536498ULL) != (((/* implicit */unsigned long long int) 1U)))) ? (((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)35611)))) : (((/* implicit */int) (signed char)-123))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 += ((/* implicit */short) min(((~(((((((/* implicit */int) (short)-32760)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)93)) - (74))))))), ((+((~(((/* implicit */int) (unsigned char)128))))))));
}
