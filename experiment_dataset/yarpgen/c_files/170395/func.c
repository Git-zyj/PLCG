/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170395
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_17 = arr_1 [i_0] [i_0];
        arr_2 [i_0] = (-(((((/* implicit */_Bool) -8744187215484261276LL)) ? (-3557458096983897795LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_18 += ((/* implicit */unsigned short) max((max((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1]))), (((((/* implicit */unsigned long long int) arr_0 [(short)2])) / (140728898420736ULL)))));
        var_19 = ((unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    var_20 |= ((/* implicit */unsigned char) 18105325951325294042ULL);
                    var_21 *= ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 18446603344811130900ULL)) || (((/* implicit */_Bool) var_16))))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                for (unsigned short i_7 = 1; i_7 < 18; i_7 += 3) 
                {
                    {
                        var_22 += ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [(unsigned char)4] [(_Bool)1])), ((~(18446603344811130879ULL)))))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_5] [7ULL]) < (arr_8 [i_2] [i_5]))))) >= (arr_16 [i_7 + 1])))));
                        var_23 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) min((arr_14 [i_2] [i_2] [i_2]), ((unsigned char)63)))), (((long long int) (unsigned char)192))))));
                    }
                } 
            } 
        } 
    }
    var_24 *= ((/* implicit */signed char) var_1);
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) / (((/* implicit */int) ((short) (unsigned char)124)))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9168739991196356694ULL)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (unsigned char)210))))) / ((~(10373832665124638436ULL))))))));
    var_26 = (~(max((max((((/* implicit */unsigned long long int) (signed char)100)), (140728898420736ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)47))))))));
    var_27 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min(((~(((/* implicit */int) var_16)))), ((~(((/* implicit */int) (unsigned char)174))))))) & (var_7)));
}
