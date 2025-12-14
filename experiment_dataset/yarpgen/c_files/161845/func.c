/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161845
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
    var_19 = ((/* implicit */signed char) var_13);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) max((((/* implicit */short) (_Bool)0)), ((short)16895)));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (_Bool)1)))))))));
                    arr_7 [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)91)), (8486550381546982451ULL)))) ? (((((/* implicit */_Bool) 9960193692162569164ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-92))) : (8363881592153103655LL))) : (((((/* implicit */_Bool) (signed char)-41)) ? (-766502172190006389LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)76)))))));
                    arr_8 [i_1] [i_2] [i_1] [i_0] |= ((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-1)), ((unsigned char)179))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)47)), ((unsigned char)192)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)18323))))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)26375)) : (((/* implicit */int) (unsigned char)63))))));
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (signed char)91))));
                }
                for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 4) 
                {
                    var_23 = ((/* implicit */unsigned int) (signed char)40);
                    arr_12 [i_0] [i_1] [0ULL] [i_1 + 2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3431694566U)) ? (((/* implicit */int) (unsigned short)47584)) : (((/* implicit */int) (short)24718))))) ? (min((8486550381546982451ULL), (((/* implicit */unsigned long long int) (signed char)-1)))) : (((/* implicit */unsigned long long int) min((-8363881592153103656LL), (((/* implicit */long long int) (unsigned char)96)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)9916)) ? (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (unsigned char)63)))) : ((+(((/* implicit */int) (unsigned char)159))))))) : (((((/* implicit */_Bool) max((9960193692162569164ULL), (((/* implicit */unsigned long long int) (unsigned char)159))))) ? (((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned long long int) 1284279283396663804LL)) : (2492093404544868908ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6318280879449546121ULL)) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (unsigned char)159)))))))));
                    var_24 *= ((/* implicit */short) min((min((-1284279283396663805LL), (((/* implicit */long long int) 4294967295U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)51593)) ? (((/* implicit */int) (unsigned short)30962)) : (((/* implicit */int) max(((unsigned short)32767), (((/* implicit */unsigned short) (unsigned char)255))))))))));
                    var_25 = ((/* implicit */unsigned int) (unsigned char)255);
                    arr_13 [i_0] [i_0] [i_0] [i_1] |= ((/* implicit */long long int) max((max((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)-1)) : (-1))), ((+(((/* implicit */int) (short)-1)))))), (-1988104718)));
                }
                var_26 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) (unsigned char)49)), (8486550381546982451ULL)))));
            }
        } 
    } 
    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)76)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 3402744098529804216LL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */long long int) 1324858784)) : (-3402744098529804217LL)))) : (((((/* implicit */_Bool) 11413032417013296437ULL)) ? (((/* implicit */unsigned long long int) -3402744098529804217LL)) : (5181203020410626780ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)207), (var_5))))) : (((((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) (unsigned char)96))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)48))))) : (max((13265541053298924836ULL), (((/* implicit */unsigned long long int) -1))))))));
    var_28 |= ((/* implicit */_Bool) var_2);
}
