/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165060
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
    var_13 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) 7322662717010723911LL);
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8796491600100095850ULL)) ? ((~(164179119U))) : (((/* implicit */unsigned int) 1774507268))))) ? (((((/* implicit */unsigned long long int) arr_4 [i_0])) | (8796491600100095850ULL))) : (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (arr_0 [i_1]))))));
                arr_6 [i_1] |= ((/* implicit */unsigned int) (-(9944734465467441285ULL)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                arr_14 [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) -1264006243)) : (1308116487046757573ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_2])))));
                var_15 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)5)) : (var_5)))) ? (((/* implicit */unsigned int) 2147483647)) : (arr_12 [i_3 - 1] [i_3 - 1])))), (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_13 [i_2])) : (80282118636199666LL))), (var_4)))));
            }
        } 
    } 
}
