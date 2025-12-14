/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14014
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) * (0U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) 15542149225708384938ULL))))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)6)))) || (((/* implicit */_Bool) max((10U), (936972514U))))))))));
                arr_6 [i_1] [i_1] = (signed char)-33;
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-9)) - (((/* implicit */int) (unsigned short)13856))))) + (((93354163U) + (4294967288U)))));
        var_14 *= (signed char)115;
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 4294967286U)))) > (((2824954048U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (signed char i_4 = 1; i_4 < 15; i_4 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) min((max((max((1787674132), (((/* implicit */int) (unsigned char)0)))), (((((/* implicit */int) (unsigned short)54012)) >> (11U))))), (max((((((/* implicit */int) (short)31155)) / (((/* implicit */int) (unsigned short)29010)))), (((((/* implicit */int) (unsigned short)20035)) << (((((/* implicit */int) (signed char)115)) - (114))))))))))));
                /* LoopSeq 1 */
                for (signed char i_5 = 2; i_5 < 14; i_5 += 1) 
                {
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)64269)), (4294967286U)))), (80274534959019739LL))) - (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)224)))))))));
                    arr_20 [i_4] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) 5100794640152279719ULL);
                }
                var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((_Bool) (_Bool)1)), (((_Bool) 0U))))), (((max((((/* implicit */unsigned int) (unsigned char)224)), (0U))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2407002711U)) && (((/* implicit */_Bool) (unsigned char)212))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((12264127785572884158ULL) >> (((576458553280167936LL) - (576458553280167932LL)))));
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 1; i_7 < 12; i_7 += 1) 
        {
            {
                var_20 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)72))))) | (((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */unsigned long long int) -6866049567436837967LL)) : (6991799332215199872ULL))))) << (((((/* implicit */int) (unsigned char)89)) - (80)))));
                arr_25 [i_6] [i_7] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)59917)), (-3978193971358628394LL)))), (min((12399682833164822108ULL), (((/* implicit */unsigned long long int) (short)708)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65532))) < (0U)))), (max((((/* implicit */unsigned short) (signed char)8)), ((unsigned short)5618)))))))));
            }
        } 
    } 
}
