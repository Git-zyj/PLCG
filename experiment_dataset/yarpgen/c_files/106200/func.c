/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106200
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */int) min((((/* implicit */long long int) (+(1235251797U)))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)255)), (13462945001535124881ULL)))) ? (((((/* implicit */_Bool) -186455127576559327LL)) ? (186455127576559326LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)76))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 70368744177663ULL)) || (((/* implicit */_Bool) var_6))))))))));
                    var_12 += ((/* implicit */_Bool) var_3);
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_13 = min(((short)-9279), (((/* implicit */short) ((((/* implicit */unsigned long long int) (~(var_7)))) <= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12673))) : (16547767671522272187ULL)))))));
                                var_14 = ((/* implicit */int) min((max(((~(13462945001535124873ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-76))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -186455127576559320LL)) ? (((/* implicit */int) var_5)) : (-1)))))))));
                                var_15 &= ((max((186455127576559312LL), (-799405701281425518LL))) >= (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)-51))))));
                            }
                        } 
                    } 
                    var_16 += ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((157976035U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) (signed char)0)) ? (var_4) : (4983799072174426729ULL)))));
                    var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)10113))) + ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-97))) : (var_3)))))) ? (max((((/* implicit */unsigned long long int) var_7)), (((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 4983799072174426729ULL)))) ? (((/* implicit */int) ((short) 13496752247845442977ULL))) : (((/* implicit */int) ((13462945001535124893ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))))));
                }
            } 
        } 
    } 
    var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((_Bool) 9223372036854775795LL)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-76)) / (482755079)))) : ((((_Bool)1) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) || (((max((-4699640264318072560LL), (((/* implicit */long long int) (_Bool)1)))) <= (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65534)))))))));
}
