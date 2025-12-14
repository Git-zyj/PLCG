/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112744
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
    var_17 = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) (unsigned short)4664)), (4819162060303983179ULL)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) (((~(2916897836920322742ULL))) | (((((13351536237711723579ULL) >> (((var_9) - (6871954570183574643ULL))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)50689)) | (((/* implicit */int) (unsigned short)65535)))))))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (6219537514252016510ULL)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) (unsigned short)13609);
        var_21 = ((7602118989460841589ULL) * (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)991))) * (0ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31436))))));
        var_22 = min((((/* implicit */unsigned long long int) (unsigned short)29753)), (max((min((15529846236789228873ULL), (10388203196589693920ULL))), (((7070219763950880413ULL) & (var_9))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) 
            {
                {
                    arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (unsigned short)36403)), (((10720613476964874148ULL) + (13111759652088692426ULL))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)12765)) << (((11376524309758671202ULL) - (11376524309758671187ULL)))))), (max((13036292958790980648ULL), (((/* implicit */unsigned long long int) (unsigned short)54601))))))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_13) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54601)))))) ^ (((/* implicit */int) (unsigned short)65535))));
                }
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        arr_17 [i_4] = max((6810323001463464028ULL), (0ULL));
        var_24 ^= ((/* implicit */unsigned long long int) min((((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) >> (((((/* implicit */int) var_16)) - (22675))))), (((/* implicit */int) (unsigned short)35782))));
    }
}
