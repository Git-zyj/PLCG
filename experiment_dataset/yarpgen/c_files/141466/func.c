/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141466
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
    var_14 = ((/* implicit */long long int) var_3);
    var_15 = ((/* implicit */unsigned short) var_0);
    var_16 |= ((/* implicit */int) var_6);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1855298852)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) (short)32181))))) ? (-1855298852) : (((((/* implicit */_Bool) 9759963337806874502ULL)) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) (unsigned char)195))))))) ? (max((1750361918U), (1750361910U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */int) (unsigned short)47430)) : ((-(1056964608))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)28022)) ? ((~(((/* implicit */int) (short)26465)))) : (((668415767) | (((/* implicit */int) (short)-3995))))))) : (((((((/* implicit */_Bool) 602360851)) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18120))))) ^ (((((/* implicit */_Bool) (short)-30985)) ? (7552295272786469909ULL) : (2881151792132537052ULL)))))));
                    var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)67)) > (((/* implicit */int) (unsigned short)10894)))))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) -21)) ? (min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) -1116091780)) ? (((/* implicit */int) (unsigned short)18106)) : (((/* implicit */int) (_Bool)1)))))) : (((((((/* implicit */int) (short)14334)) ^ (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) (unsigned char)188))))));
                    var_20 -= ((/* implicit */unsigned short) (!((_Bool)1)));
                }
            } 
        } 
        arr_15 [i_3] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1665002051U)) | (-4036767122741034806LL)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (short)-6)) ^ (((/* implicit */int) (unsigned char)20))))))) * (((((((/* implicit */_Bool) (unsigned short)17495)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54633))) : (3608548534283774099ULL))) << (((((/* implicit */_Bool) (unsigned short)17907)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4152475713U)))))));
    }
}
