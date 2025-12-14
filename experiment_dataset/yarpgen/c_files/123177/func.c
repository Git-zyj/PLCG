/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123177
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
    var_10 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((signed char) var_6))), (var_0)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_11 |= ((/* implicit */unsigned long long int) (short)23761);
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) (short)32761);
                        var_12 -= ((/* implicit */short) var_6);
                        var_13 -= ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) (short)-23762)) <= (((/* implicit */int) (short)10731))))), (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3))))) % (((-457226555) - (((/* implicit */int) (signed char)-52))))))));
                    }
                    arr_13 [i_0 - 1] [i_1] [i_2] [i_2] &= ((/* implicit */int) min((((((/* implicit */int) (short)14408)) == (((/* implicit */int) var_7)))), (((((((/* implicit */_Bool) (short)-23765)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_4))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))))));
                    var_14 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_8))) << (((((((/* implicit */_Bool) (short)23761)) ? (((/* implicit */unsigned long long int) 457226558)) : (var_4))) - (457226546ULL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23754)) ? (((((/* implicit */_Bool) (unsigned char)8)) ? (var_8) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((unsigned char) -1619373703798740699LL))))))));
                    var_15 -= ((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) (unsigned short)65531)))));
                }
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((short) (+(((/* implicit */int) (unsigned short)57344)))))), (((((/* implicit */_Bool) ((short) (short)14303))) ? (((((/* implicit */_Bool) -457226559)) ? (65535ULL) : (((/* implicit */unsigned long long int) 0U)))) : (((/* implicit */unsigned long long int) var_6)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_4 = 4; i_4 < 20; i_4 += 4) 
    {
        var_17 &= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)4))));
        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20463))) - (((3312628876362704737ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32753)))))));
        var_19 = ((/* implicit */long long int) -1291391362);
    }
}
